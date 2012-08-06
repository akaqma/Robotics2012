/*
    描画の全体を担当（Qt関連と切り離し)
        最終更新日：2012/08/07
        作者：akaqma
*/
#ifndef _GL_H_
#define _GL_H_

#include <glu.h>
#include <gl.h>
#include <iostream>
#include <cmath>

static const int RECT_WIDTH = 600;  // QGLWidgetの幅
static const int RECT_HEIGHT = 600; // 高さ

static const int RADIUS_ARM = 410;
static const int LENGTH1    = 200;  // リンク１の長さ
static const int LENGTH2    = 210;  // リンク２の長さ（厚みを考慮）

static const float RADIAN = M_PI / 180;
static const int RADIUS_BASE = 50;
static const int RADIUS_GRIPPER = 40;
static const int LIMIT = RADIUS_BASE + RADIUS_GRIPPER;

enum CMD_MODE {
    KINEMATICS = 0,
    INV_KINEMATICS
};

enum CMD_OPT {
    // 順運動学
    OPT_THETA0,
    OPT_R,
    OPT_THETA1,
    OPT_THETA2,
    OPT_D,

    // 逆運動学
    OPT_X,
    OPT_Y,
    OPT_Z
};


// --------------------------
//  座標点（平面上）
// --------------------------
struct Point {
    int x;
    int y;
    Point(): x(0),y(0) {}
    Point(int _x, int _y): x(_x), y(_y) {}
};


// --------------------------
//  平面移動成分
// --------------------------
struct Vec {
    int x;
    int y;
    Vec(): x(0),y(0) {}
    Vec(int _x, int _y): x(_x), y(_y) {}
};


// --------------------------
//  視野情報
// --------------------------
struct Polar {
    float distance;
    float twist;
    float elevation;
    float azimuth;

    Polar():
        distance(0.0),
        twist(0.0),
        elevation(-30.0),
        azimuth(20.0)
    {}
};


// --------------------------
//  ユーザ指定情報
// --------------------------
struct TargetInfo {
    float x;
    float y;
    float z;

    float theta0;
    float r;
    float theta1;
    float theta2;
    float d;
    TargetInfo(): x(0),y(0),z(190),
        theta0(0),r(0),theta1(0),theta2(0),d(0) {}
    void reset(){
        x=0;y=0;z=0;theta0=0;theta1=0;theta2=0;
    }
};

// --------------------------
//  マニピュレータの変化量
// --------------------------
struct Varient {
    float theta0;
    float r;
    float theta1;
    float theta2;
    float d;
    Varient():
        theta0(0), r(0), theta1(0), theta2(0), d(0){}
    void state(float _t0, float _r, float _t1, float _t2, float _d)
    {
        theta0 = _t0; r = _r; theta1 = _t1; theta2 = _t2; d = _d;
    }
    ~Varient() {}
};


// --------------------------
//  モデル描画クラス
//      _model.cpp にメソッドを記述
// --------------------------
class Model {
    Varient _val;

public:
    Model() {}
    ~Model() {}

    float theta0() const { return _val.theta0; }
    bool theta0(float jump, float limit) { return add_set(jump, limit, _val.theta0); }

    float r() const { return _val.r; }
    bool r(float jump, float limit) { return add_set(jump, limit, _val.r); }

    float theta1() const { return _val.theta1; }
    bool theta1(float jump, float limit) { return add_set(jump, limit, _val.theta1); }

    float theta2() const { return _val.theta2; }
    bool theta2(float jump, float limit) { return add_set(jump, limit, _val.theta2); }

    float d() const { return _val.d; }
    bool d(float jump, float limit){ return add_set(jump, limit, _val.d); }

    void  set_state(float t0, float r, float t1, float t2, float d) {
        _val.state(t0, r, t1, t2, d);
    }

    void xyz_axis();
    void truck(float theta0, float r);
    void manipulator(float theta1, float theta2, int d);
    void target_point(float x, float y, float z);

private:
    void cylinder(float radius,float height,int sides);
    void cuboid(float width, float height, float depth);
    void junction(float radius, float height, float slider);

    bool add_set(float jump, float limit, float &memba) {
        if(limit < memba) {
            if((memba - jump) < limit)
                return false;
            memba -= jump;
        }
        else {
            if((memba + jump) >= limit)
                return false;
            memba += jump;
        }

         return true;
    }
};


// --------------------------
//  計算処理クラス
//      _calculator.cpp にメソッドを記述
// --------------------------
class Calculator {
    Point   _origin;      // 台車の初期座標

    Varient _val;
    Vec     _truck_var;

public:
    Calculator(){
        _val.state(2.0, 10, 2.0, 2.0, 10);
        _origin.x=0; _origin.y=0;
    }

    ~Calculator(){}

    Varient val() const { return _val; }
    bool inv_kinematics(TargetInfo &target);

private:
    float law_of_cosines(float line1, float line2, float line3);
    bool is_z_range(float val);
    bool is_point_in_reach(float var_x, float var_y) ;

    // アームが台車にぶつからないか判定
    bool is_point_out_object(float tar_x, float tar_y, float tar_z,
                                        float var_x, float var_y);
    int position2angle(float x, float y, float z,
                                        float &t1, float &t2, float &t3);
    // 変位計算
    Vec calc_variant(float target_x, float target_y) {
        return Vec(target_x-_origin.x, target_y-_origin.y);
    }
};


// -------------------------------
//  QGLWidgetと切り離したGL用の描画クラス
//      _draw_gl.cpp にメソッドを記述
// -------------------------------
class DrawGL {
    Model       _model;                         // モデル描画インスタンス
    Calculator  _calc;                          // _modelの変動量計算インスタンス
    Point       _last_pos;                      // クリックの点
    Polar       _polar;                         // 視野情報
    int         _mouse_mode;                    // マウスクリック状態
    bool        _is_move;                       // アニメーションフラグ
    bool        _kinematics_number;             // 運動学(0)/逆運動学(1)の選択情報
    TargetInfo  _target;                        // ユーザ入力情報

public:
    DrawGL(): _mouse_mode(0), _is_move(false){}
    ~DrawGL() {}

    void draw();
    void resize(int w, int h);
    void init();
    void timer();

    void kinematics_number(int num) { _kinematics_number = num; }
    void mouse_mode(int mode) { _mouse_mode = mode; }
    int  mouse_mode() const { return _mouse_mode; }
    void move_mouse(int x, int y);
    void last_pos(int x, int y) { _last_pos.x = x; _last_pos.y = y; }
    Point last_pos() const { return _last_pos; }
    bool move_manipulator();
    void reset_manipulator();
    void stop_manipulator();
    void set_parameter(float value, CMD_OPT op);

private:
    void coordinate(int range, int jump);
    bool calc_invkinematics();
    void set_truck_move(TargetInfo &target, const Vec var);
};

#endif
