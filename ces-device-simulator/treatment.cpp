#include "treatment.h"
#include <QDebug>
#include <QTime>

Treatment::Treatment()
{
    frequency = 0.5;
    waveForm = "Alpha";
    current = 0;
    countdown = 20;
    startTime = QTime::currentTime();
    timer = new QTimer();
}

void Treatment::startTreatment(){
    timer->start(1000);
}

void Treatment::stopTreatment(){
    timer->stop();
}

double Treatment::getFrequency() const { return frequency; }
void Treatment::changeFrequency() {
    if (frequency == 0.5) {
        frequency = 77;
    } else if (frequency == 77) {
        frequency = 100;
    } else {
        frequency = 0.5;
    }

    emit frequencyChanged(frequency);
    qDebug() << "new frequency: " << frequency;
}

QString Treatment::getWaveForm() const { return waveForm; }
void Treatment::changeWaveForm() {
    QString currentWaveForm = getWaveForm();
    if (currentWaveForm == "Alpha") {
        waveForm = "Beta";
    } else if (currentWaveForm == "Beta") {
        waveForm = "Gamma";
    } else {
        waveForm = "Alpha";
    }

    emit waveFormChanged(waveForm);

    qDebug() << "new waveform: " << waveForm;
}


int Treatment::getCountdown() const { return countdown; }
void Treatment::changeCountdown() {
    int currentCountdown = getCountdown();
    switch (currentCountdown) {
        case 20:
            countdown = 40;
            break;
        case 40:
            countdown = 60;
            break;
        case 60:
            countdown = 20;
            break;
    }

    emit countdownChanged(countdown);
    qDebug() << "new countdown: " << countdown;
}

int Treatment::getCurrent() const{ return current; }
void Treatment::setCurrent(int value)
{
    current = value;
    emit currentChanged(current);
}

void Treatment::increaseCurrent(){
    if (current < 10){
        current += 1;
        emit currentChanged(current);
    }   else{
        qDebug() << "current at max value";
    }
}

void Treatment::decreaseCurrent(){
    if (current > 0){
        current -= 1;
        emit currentChanged(current);
    }   else{
        qDebug() << "current at min value";
    }
}
