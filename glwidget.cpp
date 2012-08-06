#include "glwidget.h"

// ------------------------------------------
//  コンストラクタ
// ------------------------------------------
GLWidget::GLWidget(QWidget *parent):
    QGLWidget(parent)
{
    setFixedWidth(RECT_WIDTH);
    setFixedHeight(RECT_HEIGHT);

    setFormat(QGLFormat(QGL::DoubleBuffer
                      | QGL::DepthBuffer
                      //| QGL::Rgba
              ));

    _timer = new QTimer();
    connect(_timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    _timer->start(33);  // 30fps
}


// ------------------------------------------
//  デストラクタ
// ------------------------------------------
GLWidget::~GLWidget()
{
    delete _timer;
}


// ------------------------------------------
//  初期化
// ------------------------------------------
void GLWidget::initializeGL()
{
    _gl.init();
}


// ------------------------------------------
//  ウィンドウサイズ変更
// ------------------------------------------
void GLWidget::resizeGL( int w, int h )
{
    _gl.resize(w, h);
    updateGL();
}


// ------------------------------------------
//  フレーム時間毎に呼び出される関数
// ------------------------------------------
void GLWidget::onTimer()
{
    _gl.timer();
    updateGL();
}


// ------------------------------------------
//  描画
// ------------------------------------------
void GLWidget::paintGL()
{
    _gl.draw();
}


// ------------------------------------------
//  マウス移動の検知
// ------------------------------------------
void GLWidget::mouseMoveEvent(QMouseEvent* e)
{
    if(_gl.mouse_mode() == Qt::NoButton)
        return;
    else {
        _gl.move_mouse(e->pos().x(), e->pos().y());
        updateGL();
    }
}


// ------------------------------------------
//  クリック押した検知
// ------------------------------------------
void GLWidget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton || e->button() == Qt::RightButton) {
        _gl.last_pos(e->pos().x(), e->pos().y());
        _gl.mouse_mode(e->button());
     }
}


// ------------------------------------------
//  クリックの離れる検知
// ------------------------------------------
void GLWidget::mouseReleaseEvent(QMouseEvent* e)
{
    _gl.mouse_mode(e->button());

    updateGL();
}

// ------------------------------------------
//  「Start」ボタンを押したとき
// ------------------------------------------
void GLWidget::moveManipulator()
{
    if(!_gl.move_manipulator()) {
        QMessageBox error;
        error.setText(tr("invalied value"));
        error.exec();
    }
    updateGL();
}


// ------------------------------------------
//  「Reset」ボタンを押したとき
// ------------------------------------------
void GLWidget::resetManipulator()
{
    _gl.reset_manipulator();
    updateGL();
}


// ------------------------------------------
//  EditLineのテキスト検出（未使用）
// ------------------------------------------
void GLWidget::commandLine()
{
    if(!_command.isEmpty()) {
        _msg.setText(_command);
    }
    else {
        _msg.setText("Please input command");
    }
    _msg.exec();
}


// ------------------------------------------
//  パラメータ変更
// ------------------------------------------
void GLWidget::setText(const QString &text){ _command = text; }
void GLWidget::stopManipulator(){ _gl.stop_manipulator(); }
void GLWidget::tabChange(int tab_number){ _gl.kinematics_number(tab_number);}

void GLWidget::theta0Changed(int angle){ _gl.set_parameter(angle, OPT_THETA0); }
void GLWidget::theta1Changed(int angle){ _gl.set_parameter(angle, OPT_THETA1); }
void GLWidget::theta2Changed(int angle){ _gl.set_parameter(angle, OPT_THETA2); }
void GLWidget::d_valueChanged(int value){ _gl.set_parameter(value, OPT_D); }
void GLWidget::r_valueChanged(int value){ _gl.set_parameter(value, OPT_R); }

void GLWidget::x_valueChanged(double value){ _gl.set_parameter((float)value, OPT_X); }
void GLWidget::x_valueChanged(int value){ _gl.set_parameter(value, OPT_X);}

void GLWidget::y_valueChanged(double value){ _gl.set_parameter((float)value, OPT_Y); }
void GLWidget::y_valueChanged(int value){ _gl.set_parameter(value, OPT_Y); }

void GLWidget::z_valueChanged(double value){ _gl.set_parameter((float)value, OPT_Z); }
void GLWidget::z_valueChanged(int value){ _gl.set_parameter(value, OPT_Z); }
