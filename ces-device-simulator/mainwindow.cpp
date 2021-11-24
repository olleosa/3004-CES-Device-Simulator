#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    poweredOn = false;
    updateButtonActivation();
    ui->displayFrame->setVisible(poweredOn);

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

    updateButtonActivation();
    ui->displayFrame->setVisible(poweredOn);

    if (poweredOn){
        treatment = new Treatment();

        ui->freqLabel->setText("0.5");
        ui->waveFormLabel->setText("Alpha");
        ui->currentLabel->setText("0");
        ui->timerLabel->setText("20");

        //connect ui button signals to mainwindow slots
        connect(ui->changeFreqButton, &QPushButton::pressed, this, &MainWindow::freqButtonPressed);
        connect(ui->changeWaveFormButton, &QPushButton::pressed, this, &MainWindow::waveFormButtonPressed);
        connect(ui->increaseCurrentButton, &QPushButton::pressed, this, &MainWindow::increaseCurrentButtonPressed);
        connect(ui->decreaseCurrentButton, &QPushButton::pressed, this, &MainWindow::decreaseCurrentButtonPressed);
        connect(ui->changeCountdownButton, &QPushButton::pressed, this, &MainWindow::countdownButtonPressed);

        //connect ui slots to treatment signals
        connect(treatment, &Treatment::frequencyChanged, this, &MainWindow::frequencyChanged);
        connect(treatment, &Treatment::waveFormChanged, this, &MainWindow::waveFormChanged);
        connect(treatment, &Treatment::currentChanged, this, &MainWindow::currentChanged);
        connect(treatment, &Treatment::countdownChanged, this, &MainWindow::countdownChanged);
    }   else{
        delete treatment;
    }
}

void MainWindow::freqButtonPressed(){
    treatment->changeFrequency();
}

void MainWindow::waveFormButtonPressed(){
    treatment->changeWaveForm();
}

void MainWindow::increaseCurrentButtonPressed(){
    treatment->increaseCurrent();
}

void MainWindow::decreaseCurrentButtonPressed(){
    treatment->decreaseCurrent();
}

void MainWindow::countdownButtonPressed(){
    treatment->changeCountdown();
}

void MainWindow::frequencyChanged(double frequency){
    ui->freqLabel->setText(QString::number(frequency));
}

void MainWindow::waveFormChanged(QString waveForm){
    ui->waveFormLabel->setText(waveForm);
}

void MainWindow::currentChanged(int current){
    ui->currentLabel->setText(QString::number(current));
}

void MainWindow::countdownChanged(int countdown){
    ui->timerLabel->setText(QString::number(countdown));
}

void MainWindow::updateButtonActivation(){
    ui->changeCountdownButton->setEnabled(poweredOn);
    ui->changeWaveFormButton->setEnabled(poweredOn);
    ui->changeFreqButton->setEnabled(poweredOn);
    ui->increaseCurrentButton->setEnabled(poweredOn);
    ui->decreaseCurrentButton->setEnabled(poweredOn);
    ui->recordTherapyButton->setEnabled(poweredOn);
}
