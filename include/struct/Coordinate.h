#ifndef COORDINATE_GUARD
#define COORDINATE_GUARD

#include <stdio.h>

// Coordinate struct
typedef struct Coordinate {
    double x;
    double y;

} Coordinate;

// Constructor
void new_coordinate(Coordinate* c, double x, double y);

// Print coord
void print_coord(Coordinate* c);

#endif