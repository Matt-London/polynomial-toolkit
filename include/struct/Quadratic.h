#ifndef QUADRATIC_GUARD
#define QUADRATIC_GUARD

#include "Coordinate.h"

typedef struct Quadratic {
    double a;
    double b;
    double c;

    Coordinate one;
    Coordinate two;
    Coordinate three;

} Quadratic;

#endif