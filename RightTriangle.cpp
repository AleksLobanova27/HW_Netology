#include <iostream>
#include "RightTriangle.h"

using namespace std;

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90) {
    _name = "Прямоугольный треугольник";
}