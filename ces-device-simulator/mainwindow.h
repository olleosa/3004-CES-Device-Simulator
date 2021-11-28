#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recording.h"
#include "treatment.h"
#include "battery.h"
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


private:
    Ui::MainWindow *ui;
    bool poweredOn;
    bool treatmentOn;
    bool earclipsOn;
    bool record;

    Battery* battery;
    Treatment* treatment;
    QVector<Recording*> recordings;

    void startTreatment();
    void stopTreatment();
    void updateButtonActivation();
    void setDefaultDisplay();
    void saveTreatment(Treatment* t);

private slots:
    void updateUITimer();
    void recordTreatment();
    void accessRecordings();

    //handle main display button presses
    void powerOnOff();
    void freqButtonPressed();
    void waveFormButtonPressed();
    void increaseCurrentButtonPressed();
    void decreaseCurrentButtonPressed();
    void countdownButtonPressed();
    void overloadCurrentButtonPressed();
    void applyEarclipsButtonPressed();
    void removeEarclipsButtonPressed();

    //slots to interact with treatment class
    void frequencyChanged(double);
    void waveFormChanged(QString);
    void currentChanged(int);
    void countdownChanged(int);

    //battery
    void lowBattery(int);
    void updateBatteryLevel();
signals:


};
#endif // MAINWINDOW_H
