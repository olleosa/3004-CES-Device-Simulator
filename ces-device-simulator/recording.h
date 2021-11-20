#ifndef RECORDING_H
#define RECORDING_H

#include "treatment.h"

class Recording
{
public:
    Recording();
    Recording(Treatment*);

private:
    Treatment* treatment;

};

#endif // RECORDING_H
