#include <stdio.h>

#include "../include/struct/Coordinate.h"
#include "../include/struct/Quadratic.h"


int main() {

    Quadratic t;
    Coordinate a;
    Coordinate b;
    Coordinate c;

    new_coordinate(&a, 0, 0);
    new_coordinate(&b, 1, 1);
    new_coordinate(&c, -1, 1);


    new_quadratic(&t, &a, &b, &c);

    print(&t);

    return 0;
}