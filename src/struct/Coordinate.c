#include "../../include/struct/Coordinate.h"

// Constructor
void new_coordinate(Coordinate* c, double x, double y) {
    c->x = x;
    c->y = y;
}

// Print coord
void print_coord(Coordinate* c) {
    printf("(%.2f, %.2f)\n", c->x, c->y);
}