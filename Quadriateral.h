#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Figure.h"

class Quadriateral : public Figure {
protected:
    double _a, _b, _c, _d;
    double _A, _B, _C, _D;

public:
    Quadriateral(double a, double b, double c, double d,
        double A, double B, double C, double D);
    void printInfo() const override;
};

#endif