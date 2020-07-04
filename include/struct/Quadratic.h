#ifndef QUADRATIC_GUARD
#define QUADRATIC_GUARD

#include <stdio.h>
#include <math.h>

#include "Coordinate.h"

typedef struct Quadratic {
    double a;
    double b;
    double c;

    Coordinate one;
    Coordinate two;
    Coordinate three;

} Quadratic;

// Constructor
void new_quadratic(Quadratic* quad, Coordinate* a, Coordinate* b, Coordinate* c);

// Traces for f(x) from x
double trace(Quadratic* q, double x);

// Print equation
void print(Quadratic* q);

#endif