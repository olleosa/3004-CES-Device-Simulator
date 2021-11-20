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

    double getFrequency() const;
    void setFrequency(double value);

    QString getWaveForm() const;
    void setWaveForm(const QString &value);

    int getCurrent() const;
    void setCurrent(int value);

    int getCountdown() const;
    void setCountdown(int value);

public slots:
signals:
    void treatmentFinishedSignal();

private:
    double frequency;
    QString waveForm;
    int current; //power level
    int countdown;
    QTime* startTime;
    QTimer* timer;
};

#endif // TREATMENT_H
