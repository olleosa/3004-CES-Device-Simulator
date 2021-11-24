#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recording.h"
#include "treatment.h"
#include <QVector>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void lowBattery(int);
    void updateUITimer();

    //handle main display button presses
    void powerOnOff();
    void freqButtonPressed();
    void waveFormButtonPressed();
    void increaseCurrentButtonPressed();
    void decreaseCurrentButtonPressed();
    void countdownButtonPressed();

    //slots to interact with treatment class
    void frequencyChanged(double);
    void waveFormChanged(QString);
    void currentChanged(int);
    void countdownChanged(int);

signals:


private:
    Ui::MainWindow *ui;
    QVector<Recording*> recordings;
    bool poweredOn;
    Treatment* treatment;

    void startTreatment();
    void stopTreatment();
    void updateButtonActivation();
};
#endif // MAINWINDOW_H
