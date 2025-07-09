#include <iostream>
#include <cmath>
#include "Triangle.h"


using namespace std;

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : Figure(3, "Треугольник"), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
}

void Triangle::printInfo() const {
    std::cout << _name << ":\n";
    std::cout << "Стороны: a = " << _a << " b = " << _b << " c = " << _c << "\n";
    std::cout << "Углы: A = " << _A << " B = " << _B << " C = " << _C << "\n" << std::endl;
}