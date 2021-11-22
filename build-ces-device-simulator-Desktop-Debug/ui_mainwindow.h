/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *deviceFrame;
    QPushButton *powerButton;
    QPushButton *decreaseCurrentButton;
    QPushButton *increaseCurrentButton;
    QPushButton *changeCountdownButton;
    QFrame *adminFrame;
    QPushButton *applyElectrodeButton;
    QSpinBox *batteryLevel;
    QPushButton *removeElectrodeButton;
    QPushButton *changeFrequencyButton;
    QPushButton *changeWaveformButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1317, 620);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        deviceFrame = new QFrame(centralwidget);
        deviceFrame->setObjectName(QString::fromUtf8("deviceFrame"));
        deviceFrame->setGeometry(QRect(110, 60, 351, 451));
        deviceFrame->setAutoFillBackground(false);
        deviceFrame->setFrameShape(QFrame::StyledPanel);
        deviceFrame->setFrameShadow(QFrame::Raised);
        powerButton = new QPushButton(deviceFrame);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(130, 360, 80, 25));
        decreaseCurrentButton = new QPushButton(deviceFrame);
        decreaseCurrentButton->setObjectName(QString::fromUtf8("decreaseCurrentButton"));
        decreaseCurrentButton->setGeometry(QRect(59, 270, 101, 25));
        increaseCurrentButton = new QPushButton(deviceFrame);
        increaseCurrentButton->setObjectName(QString::fromUtf8("increaseCurrentButton"));
        increaseCurrentButton->setGeometry(QRect(170, 270, 101, 25));
        changeCountdownButton = new QPushButton(deviceFrame);
        changeCountdownButton->setObjectName(QString::fromUtf8("changeCountdownButton"));
        changeCountdownButton->setGeometry(QRect(110, 230, 111, 25));
        adminFrame = new QFrame(centralwidget);
        adminFrame->setObjectName(QString::fromUtf8("adminFrame"));
        adminFrame->setGeometry(QRect(530, 60, 371, 451));
        adminFrame->setFrameShape(QFrame::StyledPanel);
        adminFrame->setFrameShadow(QFrame::Raised);
        applyElectrodeButton = new QPushButton(adminFrame);
        applyElectrodeButton->setObjectName(QString::fromUtf8("applyElectrodeButton"));
        applyElectrodeButton->setGeometry(QRect(30, 70, 101, 25));
        batteryLevel = new QSpinBox(adminFrame);
        batteryLevel->setObjectName(QString::fromUtf8("batteryLevel"));
        batteryLevel->setGeometry(QRect(260, 70, 61, 31));
        batteryLevel->setMaximum(100);
        removeElectrodeButton = new QPushButton(adminFrame);
        removeElectrodeButton->setObjectName(QString::fromUtf8("removeElectrodeButton"));
        removeElectrodeButton->setGeometry(QRect(30, 110, 111, 25));
        changeFrequencyButton = new QPushButton(adminFrame);
        changeFrequencyButton->setObjectName(QString::fromUtf8("changeFrequencyButton"));
        changeFrequencyButton->setGeometry(QRect(30, 170, 111, 25));
        changeWaveformButton = new QPushButton(adminFrame);
        changeWaveformButton->setObjectName(QString::fromUtf8("changeWaveformButton"));
        changeWaveformButton->setGeometry(QRect(30, 200, 111, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1317, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        powerButton->setText(QApplication::translate("MainWindow", "ON/OFF", nullptr));
        decreaseCurrentButton->setText(QApplication::translate("MainWindow", "Decrease Current", nullptr));
        increaseCurrentButton->setText(QApplication::translate("MainWindow", "Increase Current", nullptr));
        changeCountdownButton->setText(QApplication::translate("MainWindow", "Change Countdown", nullptr));
        applyElectrodeButton->setText(QApplication::translate("MainWindow", "Apply Electrode", nullptr));
        removeElectrodeButton->setText(QApplication::translate("MainWindow", "Remove Electrode", nullptr));
        changeFrequencyButton->setText(QApplication::translate("MainWindow", "Change Frequency", nullptr));
        changeWaveformButton->setText(QApplication::translate("MainWindow", "Change WaveForm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
