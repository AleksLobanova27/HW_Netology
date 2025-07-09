#include <iostream>
#include "Quadriateral.h"


using namespace std;

Quadriateral::Quadriateral(double a, double b, double c, double d,
    double A, double B, double C, double D)
    : Figure(4, "Четырёхугольник"), _a(a), _b(b), _c(c), _d(d),
    _A(A), _B(B), _C(C), _D(D) {
}

void Quadriateral::printInfo() const {
    std::cout << _name << ":\n";
    std::cout << "Стороны: a = " << _a << " b = " << _b << " c = " << _c
        << " d = " << _d << "\n";
    std::cout << "Углы: A = " << _A << " B = " << _B << " C = " << _C
        << " D = " << _D << "\n" << std::endl;
}