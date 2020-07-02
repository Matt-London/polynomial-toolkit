#include <stdio.h>

#include "../include/struct/Coordinate.h"
#include "../include/struct/Quadratic.h"


int main() {

    Coordinate test;
    new_coordinate(&test, 1, 2);
    print_coord(&test);

    return 0;
}