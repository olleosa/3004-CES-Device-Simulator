#include "treatment.h"
#include <QDebug>
#include <QTime>
#include "treatment.h"

Treatment::Treatment()
{
    frequency = 0.5;
    waveForm = "Alpha";
    current = 2;
    countdown = 20;
    duration = countdown * 60;
    startTime = QTime::currentTime();
    timer = new QTimer();
}

Treatment::Treatment(Treatment& old) : QObject()
{
    this->frequency = old.frequency;
    this->waveForm = old.waveForm;
    this->current = old.current;
    this->countdown = old.countdown;
    this->startTime = old.startTime;
    this->duration = old.duration;
    this->timer = NULL;
}

Treatment::~Treatment()
{
    delete timer;
}

void Treatment::setStartTime(){
    startTime = QTime::currentTime();
}

void Treatment::reset()
{
    frequency = 0.5;
    waveForm = "Alpha";
    current = 2;
    countdown = 20;
    duration = countdown * 60;
    startTime = QTime::currentTime();
}

void Treatment::startTreatment(){
    timer->start(1000);
}

void Treatment::stopTreatment(){
    timer->stop();
}

void Treatment::setDuration(int value)
{
    duration = value;
}

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

QString Treatment::getStartTimeStr() {
    return startTime.toString();
}

QString Treatment::getDurationStr() {
    int seconds = duration % 60;
    int minutes = duration / 60;
    QString dur = QString::number(minutes) + " mins. " + QString::number(seconds) + " secs.";
    return dur;
}

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
        current -= 2;
        if (current < 0){
            current = 0;
        }
        emit currentChanged(current);
    }   else{
        qDebug() << "current at min value";
    }
}

QTime Treatment::getStartTime() const { return startTime; }
QTimer* Treatment::getTimer() {return timer; }
int Treatment::getDuration() const { return duration; }
QString Treatment::getWaveForm() const { return waveForm; }
int Treatment::getCurrent() const{ return current; }
double Treatment::getFrequency() const { return frequency; }
