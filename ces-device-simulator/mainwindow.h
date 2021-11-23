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
    void startTreatment();
    void stopTreatment();



public slots:
    void lowBattery(int);
    void powerOnOff();
    void updateUITimer();

signals:


private:
    Ui::MainWindow *ui;
    QVector<Recording*> recordings;
    bool poweredOn;
    Treatment* treatment;
};
#endif // MAINWINDOW_H
