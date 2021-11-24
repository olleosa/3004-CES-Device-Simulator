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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
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
    QGraphicsView *cesBackground;
    QPushButton *changeWaveFormButton;
    QPushButton *changeFreqButton;
    QPushButton *recordTherapyButton;
    QFrame *displayFrame;
    QGraphicsView *powerOffView;
    QGraphicsView *mainView;
    QProgressBar *batteryLevelBar;
    QLabel *earclipsOnOffLabel;
    QLabel *waveFormViewIcon;
    QLabel *timerIconView;
    QLabel *freqIconView;
    QLabel *currentIconView;
    QLabel *timerLabel;
    QLabel *waveFormLabel;
    QLabel *freqLabel;
    QLabel *currentLabel;
    QLabel *countdownTimer;
    QFrame *adminFrame;
    QPushButton *applyEarclipsButton;
    QPushButton *removeEarclipsButton;
    QLabel *adminTitle;
    QLabel *batteryLevelLabel;
    QDoubleSpinBox *batteryLevel;
    QLabel *currentLevelLabel;
    QDoubleSpinBox *currentLevel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(799, 722);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        deviceFrame = new QFrame(centralwidget);
        deviceFrame->setObjectName(QString::fromUtf8("deviceFrame"));
        deviceFrame->setGeometry(QRect(10, 10, 391, 661));
        deviceFrame->setAutoFillBackground(false);
        deviceFrame->setFrameShape(QFrame::StyledPanel);
        deviceFrame->setFrameShadow(QFrame::Raised);
        powerButton = new QPushButton(deviceFrame);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(160, 600, 71, 41));
        powerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/images/power.svg);\n"
"background-color: transparent;\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #3d3d70;\n"
"}"));
        decreaseCurrentButton = new QPushButton(deviceFrame);
        decreaseCurrentButton->setObjectName(QString::fromUtf8("decreaseCurrentButton"));
        decreaseCurrentButton->setGeometry(QRect(120, 522, 51, 51));
        decreaseCurrentButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/images/decrease.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #3d3d70;\n"
"}"));
        increaseCurrentButton = new QPushButton(deviceFrame);
        increaseCurrentButton->setObjectName(QString::fromUtf8("increaseCurrentButton"));
        increaseCurrentButton->setGeometry(QRect(220, 522, 51, 51));
        increaseCurrentButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/images/increase.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #3d3d70;\n"
"}"));
        changeCountdownButton = new QPushButton(deviceFrame);
        changeCountdownButton->setObjectName(QString::fromUtf8("changeCountdownButton"));
        changeCountdownButton->setGeometry(QRect(80, 447, 51, 51));
        changeCountdownButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"image: url(:/images/timer.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #3d3d70;\n"
"}\n"
""));
        cesBackground = new QGraphicsView(deviceFrame);
        cesBackground->setObjectName(QString::fromUtf8("cesBackground"));
        cesBackground->setGeometry(QRect(10, 12, 371, 641));
        cesBackground->setStyleSheet(QString::fromUtf8("border-image: url(:/images/stimmer.svg);\n"
"background-color: rgba(255, 255, 255, 0);"));
        changeWaveFormButton = new QPushButton(deviceFrame);
        changeWaveFormButton->setObjectName(QString::fromUtf8("changeWaveFormButton"));
        changeWaveFormButton->setGeometry(QRect(170, 447, 51, 51));
        changeWaveFormButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/images/wave.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #3d3d70;\n"
"}"));
        changeFreqButton = new QPushButton(deviceFrame);
        changeFreqButton->setObjectName(QString::fromUtf8("changeFreqButton"));
        changeFreqButton->setGeometry(QRect(260, 447, 51, 51));
        changeFreqButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/images/freq.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #3d3d70;\n"
"}"));
        recordTherapyButton = new QPushButton(deviceFrame);
        recordTherapyButton->setObjectName(QString::fromUtf8("recordTherapyButton"));
        recordTherapyButton->setGeometry(QRect(160, 387, 71, 41));
        recordTherapyButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/images/save.svg);\n"
"background-color: transparent;\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #ffffff;\n"
"}"));
        displayFrame = new QFrame(deviceFrame);
        displayFrame->setObjectName(QString::fromUtf8("displayFrame"));
        displayFrame->setGeometry(QRect(51, 120, 301, 251));
        displayFrame->setFrameShape(QFrame::StyledPanel);
        displayFrame->setFrameShadow(QFrame::Raised);
        powerOffView = new QGraphicsView(displayFrame);
        powerOffView->setObjectName(QString::fromUtf8("powerOffView"));
        powerOffView->setGeometry(QRect(-10, 0, 301, 251));
        powerOffView->setStyleSheet(QString::fromUtf8("background-color: #000000;"));
        mainView = new QGraphicsView(displayFrame);
        mainView->setObjectName(QString::fromUtf8("mainView"));
        mainView->setGeometry(QRect(-10, 0, 301, 251));
        batteryLevelBar = new QProgressBar(displayFrame);
        batteryLevelBar->setObjectName(QString::fromUtf8("batteryLevelBar"));
        batteryLevelBar->setGeometry(QRect(230, 10, 50, 12));
        QFont font;
        font.setPointSize(8);
        batteryLevelBar->setFont(font);
        batteryLevelBar->setValue(24);
        earclipsOnOffLabel = new QLabel(displayFrame);
        earclipsOnOffLabel->setObjectName(QString::fromUtf8("earclipsOnOffLabel"));
        earclipsOnOffLabel->setGeometry(QRect(0, 225, 291, 31));
        earclipsOnOffLabel->setStyleSheet(QString::fromUtf8("background-color: #bfffbf;"));
        earclipsOnOffLabel->setAlignment(Qt::AlignCenter);
        waveFormViewIcon = new QLabel(displayFrame);
        waveFormViewIcon->setObjectName(QString::fromUtf8("waveFormViewIcon"));
        waveFormViewIcon->setGeometry(QRect(93, 160, 35, 35));
        waveFormViewIcon->setStyleSheet(QString::fromUtf8("image: url(:/images/wave.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;"));
        timerIconView = new QLabel(displayFrame);
        timerIconView->setObjectName(QString::fromUtf8("timerIconView"));
        timerIconView->setGeometry(QRect(20, 160, 35, 35));
        timerIconView->setStyleSheet(QString::fromUtf8("image: url(:/images/timer.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;"));
        freqIconView = new QLabel(displayFrame);
        freqIconView->setObjectName(QString::fromUtf8("freqIconView"));
        freqIconView->setGeometry(QRect(165, 160, 35, 35));
        freqIconView->setStyleSheet(QString::fromUtf8("image: url(:/images/freq.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;"));
        currentIconView = new QLabel(displayFrame);
        currentIconView->setObjectName(QString::fromUtf8("currentIconView"));
        currentIconView->setGeometry(QRect(237, 160, 35, 35));
        currentIconView->setStyleSheet(QString::fromUtf8("image: url(:/images/currentIcon.svg);\n"
"background-color: #ffffff;\n"
"border-radius: 20px;"));
        timerLabel = new QLabel(displayFrame);
        timerLabel->setObjectName(QString::fromUtf8("timerLabel"));
        timerLabel->setGeometry(QRect(10, 200, 54, 17));
        QFont font1;
        font1.setPointSize(10);
        timerLabel->setFont(font1);
        timerLabel->setAlignment(Qt::AlignCenter);
        waveFormLabel = new QLabel(displayFrame);
        waveFormLabel->setObjectName(QString::fromUtf8("waveFormLabel"));
        waveFormLabel->setGeometry(QRect(83, 200, 54, 17));
        waveFormLabel->setFont(font1);
        waveFormLabel->setAlignment(Qt::AlignCenter);
        freqLabel = new QLabel(displayFrame);
        freqLabel->setObjectName(QString::fromUtf8("freqLabel"));
        freqLabel->setGeometry(QRect(156, 200, 54, 17));
        freqLabel->setFont(font1);
        freqLabel->setAlignment(Qt::AlignCenter);
        currentLabel = new QLabel(displayFrame);
        currentLabel->setObjectName(QString::fromUtf8("currentLabel"));
        currentLabel->setGeometry(QRect(229, 200, 54, 17));
        currentLabel->setFont(font1);
        currentLabel->setAlignment(Qt::AlignCenter);
        countdownTimer = new QLabel(displayFrame);
        countdownTimer->setObjectName(QString::fromUtf8("countdownTimer"));
        countdownTimer->setGeometry(QRect(0, 60, 291, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Liberation Mono"));
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setWeight(75);
        countdownTimer->setFont(font2);
        countdownTimer->setAlignment(Qt::AlignCenter);
        displayFrame->raise();
        cesBackground->raise();
        powerButton->raise();
        decreaseCurrentButton->raise();
        increaseCurrentButton->raise();
        changeCountdownButton->raise();
        changeWaveFormButton->raise();
        changeFreqButton->raise();
        recordTherapyButton->raise();
        adminFrame = new QFrame(centralwidget);
        adminFrame->setObjectName(QString::fromUtf8("adminFrame"));
        adminFrame->setGeometry(QRect(410, 10, 371, 451));
        adminFrame->setFrameShape(QFrame::StyledPanel);
        adminFrame->setFrameShadow(QFrame::Raised);
        applyEarclipsButton = new QPushButton(adminFrame);
        applyEarclipsButton->setObjectName(QString::fromUtf8("applyEarclipsButton"));
        applyEarclipsButton->setGeometry(QRect(10, 160, 111, 25));
        removeEarclipsButton = new QPushButton(adminFrame);
        removeEarclipsButton->setObjectName(QString::fromUtf8("removeEarclipsButton"));
        removeEarclipsButton->setGeometry(QRect(10, 200, 111, 25));
        adminTitle = new QLabel(adminFrame);
        adminTitle->setObjectName(QString::fromUtf8("adminTitle"));
        adminTitle->setGeometry(QRect(10, 10, 151, 31));
        QFont font3;
        font3.setPointSize(18);
        adminTitle->setFont(font3);
        batteryLevelLabel = new QLabel(adminFrame);
        batteryLevelLabel->setObjectName(QString::fromUtf8("batteryLevelLabel"));
        batteryLevelLabel->setGeometry(QRect(10, 60, 91, 17));
        batteryLevel = new QDoubleSpinBox(adminFrame);
        batteryLevel->setObjectName(QString::fromUtf8("batteryLevel"));
        batteryLevel->setGeometry(QRect(170, 60, 71, 26));
        batteryLevel->setMaximum(100.000000000000000);
        batteryLevel->setValue(100.000000000000000);
        currentLevelLabel = new QLabel(adminFrame);
        currentLevelLabel->setObjectName(QString::fromUtf8("currentLevelLabel"));
        currentLevelLabel->setGeometry(QRect(10, 100, 131, 17));
        currentLevel = new QDoubleSpinBox(adminFrame);
        currentLevel->setObjectName(QString::fromUtf8("currentLevel"));
        currentLevel->setGeometry(QRect(170, 100, 71, 26));
        currentLevel->setDecimals(0);
        currentLevel->setMaximum(800.000000000000000);
        currentLevel->setSingleStep(100.000000000000000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 799, 22));
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
        powerButton->setText(QString());
        decreaseCurrentButton->setText(QString());
        increaseCurrentButton->setText(QString());
        changeCountdownButton->setText(QString());
        changeWaveFormButton->setText(QString());
        changeFreqButton->setText(QString());
        recordTherapyButton->setText(QString());
        earclipsOnOffLabel->setText(QApplication::translate("MainWindow", "CONTACT ON", nullptr));
        waveFormViewIcon->setText(QString());
        timerIconView->setText(QString());
        freqIconView->setText(QString());
        currentIconView->setText(QString());
        timerLabel->setText(QString());
        waveFormLabel->setText(QString());
        freqLabel->setText(QString());
        currentLabel->setText(QString());
        countdownTimer->setText(QString());
        applyEarclipsButton->setText(QApplication::translate("MainWindow", "Apply Earclips", nullptr));
        removeEarclipsButton->setText(QApplication::translate("MainWindow", "Remove Earclips", nullptr));
        adminTitle->setText(QApplication::translate("MainWindow", "Admin panel", nullptr));
        batteryLevelLabel->setText(QApplication::translate("MainWindow", "Battery Level", nullptr));
        currentLevelLabel->setText(QApplication::translate("MainWindow", "Current (Power Level)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
