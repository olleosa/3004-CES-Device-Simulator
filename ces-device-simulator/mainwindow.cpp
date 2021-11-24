#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    poweredOn = false;
    connect(ui->powerButton, &QPushButton::pressed, this, &MainWindow::powerOnOff);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startTreatment(){

}

void MainWindow::stopTreatment(){

}

void MainWindow::lowBattery(int level) {

}

void MainWindow::updateUITimer(){
    //TODO when we have a timer in the UI
}


void MainWindow::powerOnOff(){
    poweredOn = !poweredOn;
    qDebug() << "power changed: " << (poweredOn ? "on" : "off");
}
