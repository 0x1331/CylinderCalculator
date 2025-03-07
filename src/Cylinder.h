#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
private:
    double radius;
    double height;
public:
    Cylinder(double r, double h);
    double volume() const;
    double surfaceArea() const;
};

#endif // CYLINDER_H
