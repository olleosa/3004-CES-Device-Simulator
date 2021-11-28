#ifndef TREATMENT_H
#define TREATMENT_H

#include <QObject>
#include <QTimer>
#include <QTime>

#include "recording.h"


class Treatment: public QObject
{

    Q_OBJECT

public:
    Treatment();
    Treatment(Treatment&);
    Treatment(double, QString, int, int);
    ~Treatment();

    void startTreatment();
    void stopTreatment();

    void reset();

    double getFrequency() const;
    void changeFrequency();

    QTime getStartTime() const;
    QString getWaveForm() const;
    void changeWaveForm();

    int getCountdown() const;
    void changeCountdown();

    int getCurrent() const;
    void setCurrent(int value);
    void increaseCurrent();
    void decreaseCurrent();

    void setStartTime();
public slots:
signals:
    void frequencyChanged(double);
    void waveFormChanged(QString);
    void currentChanged(int);
    void countdownChanged(int);

    void treatmentFinishedSignal();

private:
    double frequency;
    QString waveForm;
    int current; //power level
    int countdown;
    QTime startTime;
    QTimer* timer;
};

#endif // TREATMENT_H
