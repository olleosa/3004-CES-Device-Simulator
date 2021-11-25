#ifndef RECORDING_H
#define RECORDING_H

#include "treatment.h"

class Treatment;

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
