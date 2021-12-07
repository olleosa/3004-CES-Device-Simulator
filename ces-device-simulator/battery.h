#ifndef BATTERY_H
#define BATTERY_H

#include <QObject>

/*
 * Class purpose: represents properties of device battery
*/

class Battery: public QObject
{

    Q_OBJECT

public:
    Battery();

    double getLevel() const;
    void setLevel(double value);
    void decreaseBattery();

public slots:

signals:
    void updateBatteryLevel(double);
    void lowBattery(double); //sends signal that battery is low (2 or 5)
    //not really sure how you want to implement this but I made an initial battery implementation
    // in mainwindow for testing purposes


private:
    double level;

};

#endif // BATTERY_H
