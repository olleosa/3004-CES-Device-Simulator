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

public slots:

signals:
    void lowBattery(int); //sends signal that battery is low (2 or 5)
    //not really sure how you want to implement this but I made an initial battery implementation
    // in mainwindow for testing purposes


private:
    int level;

};

#endif // BATTERY_H
