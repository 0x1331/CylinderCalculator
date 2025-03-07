#include "Cylinder.h"
#include <cmath>

const double PI = 3.14159265358979323846;  

Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

double Cylinder::volume() const {
    return PI * radius * radius * height;
}

double Cylinder::surfaceArea() const {
    return 2 * PI * radius * (radius + height);
}

