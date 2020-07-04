#ifndef COORDINATE_GUARD
#define COORDINATE_GUARD

#include <stdio.h>
#include <stdbool.h>

// Coordinate struct
typedef struct Coordinate {
    double x;
    double y;

} Coordinate;

// Constructor
void new_coordinate(Coordinate* c, double x, double y);

// Test if they're equal
bool equals(Coordinate* one, Coordinate* two);

// Print coord
void print_coord(Coordinate* c);

#endif