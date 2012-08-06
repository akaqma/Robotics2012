/*
    QGLWidgetに対するOpenGLの処理
        最終更新日：2012/08/07
        作者：akaqma
*/
#include "_gl.h"


// --------------------------
//  描画
// --------------------------
void DrawGL::draw()
{
    glClearColor(0.92, 0.92, 0.92, 0.0);
    glClearDepth(1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    float Diffuse[] = {1.0f, 1.0f, 1.0f, 1.0f};         //拡散反射
    float DiffuseLight[] = { 0.2f, 0.2f, 0.2f, 1.0f};   //拡散光
    float specular[]= {1.0f, 1.0f, 1.0f, 1.0f};         //鏡面反射
    float SpecularLight[] = {0.3, 0.3, 0.3, 1.0};       //鏡面光
    float lightpos[] = {-700, 900, 1200};

    glMaterialfv(GL_FRONT,GL_DIFFUSE,Diffuse);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, DiffuseLight);
    glMaterialfv(GL_FRONT,GL_SPECULAR,specular);
    glLightfv(GL_LIGHT0, GL_SPECULAR, SpecularLight);
    glLightfv(GL_LIGHT0, GL_POSITION, lightpos);

    glPushMatrix();

        // Polar Trans
        glTranslatef(0.0, 0.0, -_polar.distance);
        glRotatef(-_polar.twist, 0.0, 0.0, 1.0);
        glRotatef(-_polar.elevation, 1.0, 0.0, 0.0);
        glRotatef(-_polar.azimuth, 0.0, 1.0, 0.0);

        // 逆運動学の時、目標点を描画
        if(_kinematics_number == INV_KINEMATICS) {
            glPushMatrix();
                _model.target_point(_target.x, _target.y, _target.z);
            glPopMatrix();
        }

        glPushMatrix();
            // 地面
            coordinate(1500, 50);
            _model.xyz_axis();
        glPopMatrix();

        glPushMatrix();

            // 台車
            _model.truck(_model.theta0(), _model.r());
            // マニピュレータ
            _model.manipulator(_model.theta1(), _model.theta2(), _model.d());
        glPopMatrix();

    glPopMatrix();

}


// --------------------------
//  毎フレーム呼ばれる関数
// --------------------------
void DrawGL::timer()
{
    if(_is_move) {
        if(
                _model.theta0(_calc.val().theta0, _target.theta0)
            ||  _model.r(_calc.val().r, _target.r)
            ||  _model.theta1(_calc.val().theta1, _target.theta1)
            |   _model.theta2(_calc.val().theta2, _target.theta2)
            ||  _model.d(_calc.val().d, _target.d)
        ){
            ;   // normal
        }
        else {
            _is_move = false;
        }
    }
}


// --------------------------
//  ウィンドウサイズ変更
// --------------------------
void DrawGL::resize(int w, int h)
{
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w/(double)h, 1.0, 8000.0);
    glMatrixMode(GL_MODELVIEW);
}


// --------------------------
//  初期化
// --------------------------
void DrawGL::init()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    resize(RECT_WIDTH, RECT_HEIGHT);
    glLoadIdentity();
    gluLookAt(1000.0, 1000.0, 2000.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

    kinematics_number(0);
    reset_manipulator();
}


// ------------------------------------------
//  地面を描画
// ------------------------------------------
void DrawGL::coordinate(int range, int jump)
{
    float Ambient[] = {0.2f, 0.2f, 0.2f, 1.0f};
    float AmbientLight[] = { 0.2f, 0.2f, 0.2f, 1.0f};
    glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
    glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);

    glBegin(GL_LINES);
    for(int i = -range; i <= range; i+=jump) {
        glVertex3f(i, -range, 0);
        glVertex3f(i, range, 0);

        glVertex3f(-range, i, 0);
        glVertex3f(range, i, 0);
    }
    glEnd();
}


// --------------------------
//  マウス移動中
// --------------------------
void DrawGL::move_mouse(int x, int y)
{
    int x_disp, y_disp;
    x_disp = x - _last_pos.x;
    y_disp = y - _last_pos.y;

    // 左クリック
    if(_mouse_mode == 1) {
         _polar.azimuth += (float) x_disp / 0.8;
        _polar.elevation += (float) y_disp / 0.8;
    }
    // 右クリック
    else if(_mouse_mode == 2) {
        _polar.distance += (float) y_disp / 0.2;
        _polar.twist += (float) x_disp / 0.8;
    }
    last_pos(x, y);
}


// ------------------------------------------
//  マニピュレータの移動をスタート
// ------------------------------------------
bool DrawGL::move_manipulator()
{
    bool result = true;
    reset_manipulator();

    // 逆運動学 MODE
    if(_kinematics_number == INV_KINEMATICS) {
        if(_calc.inv_kinematics(_target)) {
            _is_move = true;;
        }
        else {
            result = false;
        }

     }
    else {
        _is_move = true;
    }
    return result;
}


// ------------------------------------------
//  マニピュレータの移動をストップ
// ------------------------------------------
void DrawGL::stop_manipulator()
{
    _is_move = false;
}


// ------------------------------------------
//  マニピュレータの位置を初期値にリセット
// ------------------------------------------
void DrawGL::reset_manipulator()
{
    _model.set_state(0.0, 0.0, 0.0, 0.0, 0.0);
   _is_move = false;
}


// ------------------------------------------
//  パラメータをセット
// ------------------------------------------
void DrawGL::set_parameter(float value, CMD_OPT op)
{
    switch(op) {
    case OPT_THETA0:
        _target.theta0 = value;
        break;
    case OPT_R:
        _target.r = value;
        break;
    case OPT_THETA1:
        _target.theta1 = value;
        break;
    case OPT_THETA2:
        _target.theta2 = value;
        break;
    case OPT_D:
        _target.d = value;
        break;
    case OPT_X:
        _target.x = value;
        break;
    case OPT_Y:
        _target.y = value;
        break;
    case OPT_Z:
        _target.z = value;
    default:
        break;
    }
}






