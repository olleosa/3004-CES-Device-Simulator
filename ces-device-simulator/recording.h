#ifndef RECORDING_H
#define RECORDING_H

#include "treatment.h"

class Treatment;

/*
 * Class purpose: keeps track of each recorded treatment
*/

class Recording
{
public:
    Recording(Treatment* t);
    ~Recording();

    Treatment* getTreatment();
private:
    Treatment* treatment;

};

#endif // RECORDING_H
