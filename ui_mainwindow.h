/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Aug 7 01:11:42 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    GLWidget *widget;
    QGroupBox *groupBox_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QDial *dial_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QDial *dial_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QSlider *verticalSlider_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_17;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDial *dial;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSlider *verticalSlider;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QSlider *verticalSlider_3;
    QSpacerItem *horizontalSpacer_2;
    QSlider *verticalSlider_6;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QSlider *verticalSlider_7;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_20;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_21;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(910, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new GLWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 600, 600));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setCursor(QCursor(Qt::CrossCursor));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(605, 10, 301, 541));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(15, 30, 275, 401));
        tabWidget->setElideMode(Qt::ElideRight);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(5, 170, 260, 191));
        layoutWidget_2 = new QWidget(groupBox_4);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 24, 261, 161));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        dial_2 = new QDial(layoutWidget_2);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setMinimum(-179);
        dial_2->setMaximum(180);

        verticalLayout_4->addWidget(dial_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, -1, -1, 0);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_5->addWidget(label_12);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_6);

        dial_3 = new QDial(layoutWidget_2);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setMaximum(180);

        verticalLayout_9->addWidget(dial_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, -1, -1);
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);


        verticalLayout_9->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_5);

        verticalSlider_2 = new QSlider(layoutWidget_2);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setMaximum(260);
        verticalSlider_2->setOrientation(Qt::Vertical);

        verticalLayout_8->addWidget(verticalSlider_2);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font;
        font.setPointSize(10);
        label_17->setFont(font);

        verticalLayout_10->addWidget(label_17);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        verticalLayout_10->addWidget(label_16);


        horizontalLayout_2->addLayout(verticalLayout_10);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(5, 0, 260, 171));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 261, 141));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        dial = new QDial(layoutWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimum(-179);
        dial->setMaximum(180);

        verticalLayout_2->addWidget(dial);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(15, -1, 5, -1);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        verticalSlider = new QSlider(layoutWidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMinimum(-1000);
        verticalSlider->setMaximum(1000);
        verticalSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(verticalSlider);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        verticalLayout_11->addWidget(label_18);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_2);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        verticalLayout_11->addWidget(label_19);


        horizontalLayout->addLayout(verticalLayout_11);


        horizontalLayout_7->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 0, 251, 431));
        widget1 = new QWidget(groupBox_5);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(1, 60, 251, 301));
        horizontalLayout_8 = new QHBoxLayout(widget1);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        verticalSlider_3 = new QSlider(widget1);
        verticalSlider_3->setObjectName(QString::fromUtf8("verticalSlider_3"));
        verticalSlider_3->setMinimum(-1000);
        verticalSlider_3->setMaximum(1000);
        verticalSlider_3->setOrientation(Qt::Vertical);

        horizontalLayout_8->addWidget(verticalSlider_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        verticalSlider_6 = new QSlider(widget1);
        verticalSlider_6->setObjectName(QString::fromUtf8("verticalSlider_6"));
        verticalSlider_6->setMinimum(-1000);
        verticalSlider_6->setMaximum(1000);
        verticalSlider_6->setOrientation(Qt::Vertical);

        horizontalLayout_8->addWidget(verticalSlider_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 50, -1, 40);
        verticalSlider_7 = new QSlider(widget1);
        verticalSlider_7->setObjectName(QString::fromUtf8("verticalSlider_7"));
        verticalSlider_7->setMinimum(190);
        verticalSlider_7->setMaximum(400);
        verticalSlider_7->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(verticalSlider_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_20 = new QLabel(widget1);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        verticalLayout_12->addWidget(label_20);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_3);

        label_21 = new QLabel(widget1);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        verticalLayout_12->addWidget(label_21);


        horizontalLayout_8->addLayout(verticalLayout_12);

        widget2 = new QWidget(groupBox_5);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 30, 191, 18));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_13);

        label_14 = new QLabel(widget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_14);

        label_15 = new QLabel(widget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_15);

        tabWidget->addTab(tab_2, QString());
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 450, 281, 71));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 25, 72, 40));
        pushButton->setAutoRepeatInterval(100);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(185, 25, 77, 40));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(98, 25, 71, 40));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(780, 560, 114, 32));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), widget, SLOT(resetManipulator()));
        QObject::connect(pushButton, SIGNAL(clicked()), widget, SLOT(moveManipulator()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), widget, SLOT(stopManipulator()));
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), widget, SLOT(tabChange(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), widget, SLOT(theta0Changed(int)));
        QObject::connect(dial_2, SIGNAL(sliderMoved(int)), widget, SLOT(theta1Changed(int)));
        QObject::connect(dial_3, SIGNAL(sliderMoved(int)), widget, SLOT(theta2Changed(int)));
        QObject::connect(verticalSlider, SIGNAL(sliderMoved(int)), widget, SLOT(r_valueChanged(int)));
        QObject::connect(verticalSlider_2, SIGNAL(sliderMoved(int)), widget, SLOT(d_valueChanged(int)));
        QObject::connect(verticalSlider_3, SIGNAL(sliderMoved(int)), widget, SLOT(x_valueChanged(int)));
        QObject::connect(verticalSlider_6, SIGNAL(sliderMoved(int)), widget, SLOT(y_valueChanged(int)));
        QObject::connect(verticalSlider_7, SIGNAL(sliderMoved(int)), widget, SLOT(z_valueChanged(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Robotics Report 2012", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\343\203\236\343\203\213\343\203\224\343\203\245\343\203\254\343\203\274\343\202\277", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "theta1", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "-180", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "180", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "theta2", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "180", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "d", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "260", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\260\350\273\212", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "theta0", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "-180", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "180", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "r", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "1000", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "-1000", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\351\201\213\345\213\225\345\255\246", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\272\247\346\250\231\346\214\207\345\256\232", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "1000", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "-1000", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "x", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "y", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "z", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\351\200\206\351\201\213\345\213\225\345\255\246", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\343\202\242\343\203\213\343\203\241\343\203\274\343\202\267\343\203\247\343\203\263", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Reset", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
