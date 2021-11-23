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
}

double Treatment::getFrequency() const { return frequency; }
void Treatment::changeFrequency() {
    double currentFrequency = getFrequency();
    if (currentFrequency == 0.5) {
        frequency = 77;
    } else if (currentFrequency == 77) {
        frequency = 100;
    } else {
        frequency = 0.5;
    }

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
    qDebug() << "new countdown: " << countdown;
}
