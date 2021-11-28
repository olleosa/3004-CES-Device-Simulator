#ifndef BATTERY_H
#define BATTERY_H

#include <QObject>

class Battery: public QObject
{

    Q_OBJECT

public:
    Battery();

    int getLevel() const;
    void setLevel(int value);
    void batteryLow(int);

public slots:

signals:
    void lowBattery(int); //sends signal that battery is low (2 or 5)


private:
    int level;

};

#endif // BATTERY_H
