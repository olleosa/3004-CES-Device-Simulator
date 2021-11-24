#ifndef TREATMENT_H
#define TREATMENT_H

#include <QObject>
#include <QTimer>
#include <QTime>

class Treatment: public QObject
{

    Q_OBJECT

public:
    Treatment();
    Treatment(double, QString, int, int);

    void startTreatment();
    void stopTreatment();

    double getFrequency() const;
    void changeFrequency();

    QString getWaveForm() const;
    void changeWaveForm();

    int getCountdown() const;
    void changeCountdown();

    int getCurrent() const;
    void setCurrent(int value);
    void increaseCurrent();
    void decreaseCurrent();

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
