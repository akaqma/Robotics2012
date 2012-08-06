/*
    運動学・逆運動学の計算処理担当
        最終更新日：2012/08/07
        作者：akaqma
*/
#include "_gl.h"

// ------------------------------------------
//  逆運動学の計算
// ------------------------------------------
bool Calculator::inv_kinematics(TargetInfo &target)
{
    Vec var = calc_variant(target.x, target.y);
    int result = 0;

    // アームの手で届く範囲＆アームがめり込まない範囲
    if(is_point_in_reach(target.x, target.y)
            && is_point_out_object(target.x, target.y, target.z, var.x, var.y)) {
        result = position2angle(target.x, target.y, target.z, target.theta1, target.theta2, target.d);
        target.r = 0;
        target.theta0 = 0;
    }
    //
    else {
        target.r = sqrt(var.x*var.x + var.y*var.y) - 410;
        target.theta0 = -1*atan2(var.x,var.y)/RADIAN;
        target.theta1 = 0;
        target.theta2 = 0;
        target.d = 390 - target.z;
    }
    return 1;
}


// --------------------------
//  アームと台車の当たり判定
// --------------------------
bool Calculator::is_point_out_object(
        float tar_x, float tar_y, float tar_z,      // 座標
        float var_x, float var_y                    // 変化量
) {
    bool is_out_range = false;

    if(tar_z < 190 || 450 < tar_z) {
        ;
    }
    else if(tar_z < 210) {
        if(    tar_x < _origin.x-190
            || _origin.x + 190 < tar_x
            || tar_y < _origin.y - 240
            || _origin.y + 240 < tar_y
        ) {
            is_out_range = true;
        }
    }
    else {
        is_out_range = (var_x*var_x + var_y*var_y > LIMIT * LIMIT);
    }

    return is_out_range;
}


// --------------------------
//  座標位置から変動量の計算
// --------------------------
int Calculator::position2angle(
        float x, float y, float z,              // in
        float &t1, float &t2, float &t3)        // out
{
    double t0 = atan2(x, y);
    double phi;
    double length0 = sqrt(x*x + y*y);

    // calculate t2
    t2 = 180 - law_of_cosines(LENGTH1, LENGTH2, length0);
    if(t2 < 0 || 180 < t2) {
        return -1;
    }

    // calculate t1
    phi = law_of_cosines(length0, LENGTH1, LENGTH2);
    t1 = t0 / RADIAN - phi;

    // calculate t3
    t3 = 390 - z;
    if(260 < t3 || t3 < 0) {
        return -1;
    }

    return 0;
}


// --------------------------
//  余弦定理計算
// --------------------------
float Calculator::law_of_cosines(float line1, float line2, float line3)
{
    float tmp1 = line1*line1 + line2*line2 - line3*line3;
    float tmp2 = 2 * line1 * line2;

    return acos(tmp1/tmp2) / RADIAN;
}

// --------------------------
// アームの届く範囲かを判定
// --------------------------
bool Calculator::is_point_in_reach(float var_x, float var_y) {
    return (var_x * var_x + var_y * var_y < RADIUS_ARM * RADIUS_ARM);
}

