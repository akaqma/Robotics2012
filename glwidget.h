#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QKeyEvent>
#include <QMessageBox>
#include <QTimer>
#include "_gl.h"


class GLWidget : public QGLWidget
{
    Q_OBJECT

public:
    GLWidget(QWidget *parent = 0);
    ~GLWidget();

protected slots:
    void onTimer();
    void moveManipulator();
    void resetManipulator();
    void stopManipulator();
    void commandLine();
    void setText(const QString &text);
    void tabChange(int tab_number);
    void theta0Changed(int angle);
    void theta1Changed(int angle);
    void theta2Changed(int angle);
    void r_valueChanged(int value);
    void d_valueChanged(int value);
    void x_valueChanged(double value);
    void y_valueChanged(double value);
    void z_valueChanged(double value);
    void x_valueChanged(int value);
    void y_valueChanged(int value);
    void z_valueChanged(int value);

protected:
    virtual void initializeGL();
    virtual void resizeGL( int w, int h );
    virtual void paintGL();
    void mouseMoveEvent(QMouseEvent* e);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent* e);

    QTimer      *_timer;
    DrawGL      _gl;
    QMessageBox _msg;
    QString     _command;
};

#endif // GLWIDGET_H
