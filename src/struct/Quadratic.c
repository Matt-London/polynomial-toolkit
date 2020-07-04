#include "../../include/struct/Quadratic.h"

// Constructor
void new_quadratic(Quadratic* quad, Coordinate* one, Coordinate* two, Coordinate* three) {
    // Break coords into x and y
    double x1 = one->x;
    double y1 = one->y;
    double x2 = two->x;
    double y2 = two->y;
    double x3 = three->x;
    double y3 = three->y;

    // Temp a, b, c
    double a, b, c;

    // Solve from coords
    double aNum = -1 * (x1 * (y2 - y3) - y1 * (x2 - x3) + x2 * y3 - y2 * x3);
    double aDen = (pow(x1, (double) 2) - x1 * (x2 + x3) + x2 * x3) * (x2 - x3);
    a = aNum / aDen;

    double bNum = pow(x1, (double) 2) * (y2 - y3) - y1 * (x2 + x3) * (x2 - x3) + pow(x2, (double) 2) * y3 - y2 * pow(x3, (double) 2);
    double bDen = (pow(x1, (double) 2) - x1 * (x2 + x3) + x2 * x3) * (x2 - x3);
    b = bNum / bDen;

    double cNum = pow(x1, (double) 2) * (x2 * y3 - y2 * x3) - x1 * (pow(x2, (double) 2) * y3 - y2 * pow(x3, (double) 2)) + y1 * x2 * (x2 - x3) * x3;
    double cDen = (pow(x1, (double) 2) - x1 * (x2 + x3) + x2 * x3) * (x2 - x3);
    c = bNum / cDen;

    if(a < 0 && b < 0 && c < 0) {
        a *= -1;
        b *= -1;
        c *= -1;
    }

    // Adjust for negative 0;
    if(a == 0) {
        a = 0;
    }
    if(b == 0) {
        b = 0;
    }
    if(c == 0) {
        c = 0;
    }

    // Set to struct's attributes
    quad->a = a;
    quad->b = b;
    quad->c = c;

}

// Traces for f(x) from x
double trace(Quadratic* q, double x) {
    return ((q->a * pow(x, 2)) + (q->b * x) + (q->c));
}

// Print equation
void print(Quadratic* q) {
    printf("f(x) = %.2lfx^2 + %.2lfx + %.2lf\n", q->a, q->b, q->c);
}