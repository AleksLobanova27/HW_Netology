#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
protected:
    double _a, _b, _c;
    double _A, _B, _C;

public:
    Triangle(double a, double b, double c, double A, double B, double C);
    void printInfo() const override;
};

#endif