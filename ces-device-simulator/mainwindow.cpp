#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    treatment = new Treatment();
    battery = new Battery();
    timer = new QTimer();

    poweredOn = false;
    treatmentOn = false;
    earclipsOn = false;
    record = false;

    setDefaultDisplay();

    //connect ui button signals to mainwindow slots
    connect(ui->powerButton, &QPushButton::pressed, this, &MainWindow::powerOnOff);
    connect(ui->changeFreqButton, &QPushButton::pressed, this, &MainWindow::freqButtonPressed);
    connect(ui->changeWaveFormButton, &QPushButton::pressed, this, &MainWindow::waveFormButtonPressed);
    connect(ui->increaseCurrentButton, &QPushButton::pressed, this, &MainWindow::increaseCurrentButtonPressed);
    connect(ui->decreaseCurrentButton, &QPushButton::pressed, this, &MainWindow::decreaseCurrentButtonPressed);
    connect(ui->changeCountdownButton, &QPushButton::pressed, this, &MainWindow::countdownButtonPressed);

    connect(ui->currentOverloadButton, &QPushButton::pressed, this, &MainWindow::overloadCurrentButtonPressed);
    connect(ui->applyEarclipsButton, &QPushButton::pressed, this, &MainWindow::applyEarclipsButtonPressed);
    connect(ui->removeEarclipsButton, &QPushButton::pressed, this, &MainWindow::removeEarclipsButtonPressed);
    connect(ui->recordTreatmentButton, &QPushButton::pressed, this, &MainWindow::recordTreatment);
    connect(ui->accessRecordingsButton, &QPushButton::pressed, this, &MainWindow::accessRecordings);

    //connect ui slots to treatment signals
    connect(treatment, &Treatment::frequencyChanged, this, &MainWindow::frequencyChanged);
    connect(treatment, &Treatment::waveFormChanged, this, &MainWindow::waveFormChanged);
    connect(treatment, &Treatment::currentChanged, this, &MainWindow::currentChanged);
    connect(treatment, &Treatment::countdownChanged, this, &MainWindow::countdownChanged);
    connect(treatment->getTimer(), &QTimer::timeout, this, &MainWindow::updateUITimer);

    //timer for earclips being off for 5s
    connect(timer, &QTimer::timeout, this, &MainWindow::earclipsOff);

    //battery
    connect(ui->batteryLevel, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::batteryLevelChanged);
    connect(battery, &Battery::updateBatteryLevel, this, &MainWindow::updateBatteryLevel);
    connect(battery, &Battery::lowBattery, this, &MainWindow::lowBattery);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete treatment;
    delete battery;
    for (int i = 0; i < recordings.size(); i++) {
        delete recordings[i];
    }
}

void MainWindow::setDefaultDisplay() {
    updateButtonActivation();
    ui->countdownTimer->setText("20:00");
    ui->displayFrame->setVisible(poweredOn);
    ui->freqLabel->setText("0.5");
    ui->waveFormLabel->setText("Alpha");
    ui->currentLabel->setText("2");
    ui->timerLabel->setText("20");
}

void MainWindow::startTreatment() {
    if (treatment->getCurrent() == 0) {
        qDebug() << "Power level is 0. Please remove earclips, increase power level, then try again";
        return;
    }

    //change currentCountdownLeft here for testing purposes
    if (earclipsOn){
        treatmentOn = true;
        treatment->startTreatment();
        currentCountdownLeft = treatment->getCountdown() * 60;
        treatment->setStartTime();
        qDebug() << "Treatment started";
    }
}

void MainWindow::stopTreatment() {
    treatmentOn = false;
    treatment->stopTreatment();

    if (record) {
        saveTreatment(treatment);
    }
    treatment->reset();
    setDefaultDisplay();
    qDebug() << "Treatment stopped";
}

void MainWindow::recordTreatment(){
    record = true;
    qDebug() << "Treatment is being recorded";
}

void MainWindow::saveTreatment(Treatment* t){
    recordings.push_back(new Recording(new Treatment(*(t))));
    qDebug() << "Treatment recorded";
    record = false;
}

void MainWindow::batteryLevelChanged(double level){
    battery->setLevel(level);
}

void MainWindow::updateBatteryLevel(double level) {
    ui->batteryLevelBar->setValue(level);
}

void MainWindow::lowBattery(double level) {
    if (level > 2) {
       qDebug() << "Warning: low battery";
    } else if (level <= 2) {
       qDebug() << "Low battery. Power off";
       powerOnOff();
    }
}

void MainWindow::accessRecordings(){
    if (recordings.size() == 0) {
        qDebug() << "No recordings have been made";
    }
    for (int i = 0; i < recordings.size(); i++){
        qDebug() << "";
        qDebug() << "Recording #" << i+1;
        qDebug() << "Frequency:" << recordings[i]->getTreatment()->getFrequency();
        qDebug() << "Power:" << recordings[i]->getTreatment()->getCurrent();
        qDebug() << "Waveform:" << recordings[i]->getTreatment()->getWaveForm();
        qDebug() << "Countdown:" << recordings[i]->getTreatment()->getCountdown();
        qDebug() << "Start time:" << recordings[i]->getTreatment()->getStartTime();
    }
}



void MainWindow::updateUITimer()
{
    currentCountdownLeft -= 1;
    QString mins = QString::number(currentCountdownLeft / 60);
    QString seconds = (currentCountdownLeft % 60 < 10 ? "0" + QString::number(currentCountdownLeft % 60) : QString::number(currentCountdownLeft % 60));
    QString displayTime = mins + ":" + seconds;
    ui->countdownTimer->setText(displayTime);

    if (currentCountdownLeft == 0) stopTreatment();
}


void MainWindow::powerOnOff(){
    poweredOn = !poweredOn;
    setDefaultDisplay();

    if (!poweredOn){
        treatmentOn = false;
        treatment->reset();
    }
}

void MainWindow::applyEarclipsButtonPressed(){
    earclipsOn = true;
    ui->earclipsOnOffLabel->setText("CONTACT ON");
    ui->earclipsOnOffLabel->setStyleSheet("background-color: rgb(172, 218, 168);");

    if (treatmentOn){
        timer->stop();
    }   else{
        startTreatment();
    }

}

void MainWindow::removeEarclipsButtonPressed(){
    earclipsOn = false;
    ui->earclipsOnOffLabel->setText("CONTACT OFF");
    ui->earclipsOnOffLabel->setStyleSheet("background-color: rgb(229, 121, 121);");

    qDebug() << "Warning: earclips have been removed";
    if (treatmentOn){
        qDebug() << "Treatment will stop after 5 seconds";
        timer->start(5000);
    }
}

void MainWindow::earclipsOff(){
    qDebug() << "Earclips have been removed for 5 seconds, treatment is stopping";
    timer->stop();
    stopTreatment();
}

void MainWindow::overloadCurrentButtonPressed(){
    poweredOn = false;
    treatment->reset();
    setDefaultDisplay();
    qDebug() << "Current exceeds 700 μA. Device has been permanently disabled";
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
    ui->countdownTimer->setText(QString::number(countdown) + ":00");
}

void MainWindow::updateButtonActivation(){
    ui->accessRecordingsButton->setEnabled(poweredOn);
    ui->changeCountdownButton->setEnabled(poweredOn);
    ui->changeWaveFormButton->setEnabled(poweredOn);
    ui->changeFreqButton->setEnabled(poweredOn);
    ui->increaseCurrentButton->setEnabled(poweredOn);
    ui->decreaseCurrentButton->setEnabled(poweredOn);
    ui->recordTreatmentButton->setEnabled(poweredOn);
    ui->batteryLevel->setEnabled(poweredOn);
    ui->currentOverloadButton->setEnabled(poweredOn);
    ui->applyEarclipsButton->setEnabled(poweredOn);
    ui->removeEarclipsButton->setEnabled(poweredOn);
}
