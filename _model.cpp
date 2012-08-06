/*
    台車＆マニピュレータを描画する処理
        最終更新日：2012/08/07
        作者：akaqma
*/
#include "_gl.h"

// ------------------------------------------
//  座標軸を描画(x, y, z) = (赤, 緑, 青)
// ------------------------------------------
void Model::xyz_axis()
{
    glBegin(GL_LINES);
    {
        float Ambient[] = {1.0f, 0.0f, 0.0f, 1.0f};
        float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f};
        glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
        glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
    }
    glVertex3f(0,0,0);
    glVertex3f(1000,0,10);
    {
        float Ambient[] = {0.0f, 1.0f, 0.0f, 1.0f};
        float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f};
        glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
        glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
    }
    glVertex3f(0,0,0);
    glVertex3f(0,1000,10);
    {
        float Ambient[] = {0.0f, 0.0f, 1.0f, 1.0f};
        float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f};
        glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
        glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
    }
    glVertex3f(0,0,0);
    glVertex3f(0,0,1000);
    glEnd();
}


// ------------------------------------------
//  台車を描画
// ------------------------------------------
void Model::truck(float theta0, float r)
{
    glTranslatef(0, 0, 75);
    glRotatef(theta0, 0, 0, 1);
    glTranslatef(0, r, 0);

    //台座
    {
        float Ambient[] = {0.1f, 0.1f, 0.3f, 1.0f};
        float AmbientLight[] = { 1.0f, 1.0f, 0.5f, 1.0f};
        glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
        glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
    }
    cuboid(300, 400, 150);


    // 車輪1
    glPushMatrix();
        glTranslatef(150, 0, 0);
        glRotatef(90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        glColor3f(0.5,0.5,0.5);
        {
            float Ambient[] = {0.2f, 0.2f, 0.2f, 1.0f};
            float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f};
            glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
            glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
        }
        cylinder(75, 30, 100);
    glPopMatrix();

    // 車輪2
    glPushMatrix();
        glTranslatef(-150, 0, 0);
        glRotatef(-90, 0, 1, 0);
        glTranslatef(0, 0, 15);
        glColor3f(0.5,0.5,0.5);
        {
            float Ambient[] = {0.2f, 0.2f, 0.2f, 1.0f};
            float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f};
            glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
            glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
        }
        cylinder(75, 30, 100);
    glPopMatrix();
}


// ------------------------------------------
//  マニピュレータを描画
// ------------------------------------------
void Model::manipulator(float theta1, float theta2, int d)
{

    glPushMatrix();
        glTranslatef(0, 0, 150);
        cylinder(50, 200, 200);

        // リンク1
        {
            float Ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};
            float AmbientLight[] = { 0.4f, 0.0f, 0.0f, 1.0f};
            glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
            glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
        }
        glTranslatef(0, 0, 200);            // 円柱
        glTranslatef(0, 0, 20);             // 厚み分
        glRotatef(-90.0, 1.0, 0.0, 0.0);
        glRotatef(theta1, 0, 1, 0);
        cuboid(80, 40, 200);

        // 接合部
        junction(40, 50, 100);

        // リンク2
        {
            float Ambient[] = {0.7f, 0.5f, 0.1f, 1.0f};
            float AmbientLight[] = { 0.1f, 0.1f, 0.3f, 1.0f};
            glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
            glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
        }
        glTranslatef(0, 0, 200);
        glRotatef(theta2, 0, 1, 0);
        cuboid(80, 40, 200);

        // 接合部
        junction(40, 50, 100);

        // リンク3
        glTranslatef(0, 0, 200);
        junction(40, 50, 100);
        {
            float Ambient[] = {0.1f, 0.2f, 0.2f, 1.0f};
            float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f};
            glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
            glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
        }
        glRotatef(-90, 1, 0, 0);
        glTranslatef(0, -10, -280);
        glTranslatef(0, 0, d);
        cylinder(20, 300, 200);

        // グリッパ
        {
            float Ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
            float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 1.0f};
            glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
            glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
        }
        glTranslatef(0, 0, 300);
        cuboid(80, 30, 10);
        glPushMatrix();
            glTranslatef(30, 0, 0);
            cuboid(10, 20, 40);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-30, 0, 0);
            cuboid(10, 20, 40);
        glPopMatrix();


    glPopMatrix();

}

// ------------------------------------------
//  指定したxyz座標ポイントを描画
// ------------------------------------------
void Model::target_point(float x, float y, float z)
{
    {
        float Ambient[] = {1.0f, 0.0f, 0.0f, 1.0f};
        float AmbientLight[] = { 1.0f, 1.0f, 1.0f, 0.0f};
        glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
        glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
    }
    glTranslatef(x, y, z);
    cuboid(30, 30, 30);
}


// ------------------------------------------
//  円柱を描画
// ------------------------------------------
void Model::cylinder(float radius,float height,int sides)
{
    double pi = 3.1415;
    //上面
    glNormal3d(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    for(double i = 0; i < sides; i++) {
        double t = pi*2/sides * (double)i;
        glVertex3d(radius * cos(t), radius * sin(t), height);
    }
    glEnd();
    //側面
    glBegin(GL_QUAD_STRIP);
    for(double i=0;i<=sides;i=i+1){
        double t = i*2*pi/sides;
        glNormal3f((GLfloat)cos(t) ,(GLfloat)sin(t) ,0.0);
        glVertex3f((GLfloat)(radius*cos(t)), (GLfloat)(radius*sin(t)), 0);
        glVertex3f((GLfloat)(radius*cos(t)) ,(GLfloat)(radius*sin(t)), height);
    }
    glEnd();
    //下面
    glNormal3d(0.0, 0.0, -1.0);
    glBegin(GL_POLYGON);
    for(double i = sides; i >= 0; --i) {
        double t = pi*2/sides * (double)i;
        glVertex3d(radius * cos(t), radius * sin(t), 0);
    }
    glEnd();
}


// ------------------------------------------
//  直方体を描画
// ------------------------------------------
void Model::cuboid(float width, float height, float depth)
{
    glBegin(GL_QUADS);
    //前
    glNormal3f(0.0,0.0,-1.0);
    glVertex3f(width/2,height/2,depth);
    glVertex3f(-width/2,height/2,depth);
    glVertex3f(-width/2,-height/2,depth);
    glVertex3f(width/2,-height/2,depth);

    //左
    glNormal3f(1.0,0.0,0.0);
    glVertex3f(width/2,height/2,depth);
    glVertex3f(width/2,height/2,0);
    glVertex3f(width/2,-height/2,0);
    glVertex3f(width/2,-height/2,depth);

    //右
    glNormal3f(-1.0,0.0,0.0);
    glVertex3f(-width/2,height/2,0);
    glVertex3f(-width/2,height/2,depth);
    glVertex3f(-width/2,-height/2,depth);
    glVertex3f(-width/2,-height/2,0);

    //後
    glNormal3f(0.0,0.0,1.0);
    glVertex3f(width/2,height/2,0);
    glVertex3f(-width/2,height/2,0);
    glVertex3f(-width/2,-height/2,0);
    glVertex3f(width/2,-height/2,0);

    //上
    glNormal3f(0.0,1.0,0.0);
    glVertex3f(width/2,height/2,depth);
    glVertex3f(-width/2,height/2,depth);
    glVertex3f(-width/2,height/2,0);
    glVertex3f(width/2,height/2,0);

    //下
    glNormal3f(0.0,-1.0,0.0);
    glVertex3f(width/2,-height/2,depth);
    glVertex3f(-width/2,-height/2,depth);
    glVertex3f(-width/2,-height/2,0);
    glVertex3f(width/2,-height/2,0);
    glEnd();
}

// ------------------------------------------
//  接合部を描画
// ------------------------------------------
void Model::junction(float radius, float height, float slider)
{
    glPushMatrix();
        glRotatef(90, 1, 0, 0);
        glTranslatef(0, 0, -25);
        {
            float Ambient[] = {0.1f, 0.1f, 0.1f, 1.0f};
            float AmbientLight[] = { 0.3f, 0.3f, 0.6f, 1.0f};
            glMaterialfv(GL_FRONT,GL_AMBIENT,Ambient);
            glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);
        }
        cylinder(radius, height, slider);
    glPopMatrix();
}
