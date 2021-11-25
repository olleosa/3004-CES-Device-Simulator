#include "recording.h"

Recording::Recording(Treatment* t)
{
    treatment = t;
}

Recording::~Recording()
{
    delete treatment;
}

Treatment* Recording::getTreatment() {
    return treatment;
}
