#include <iostream>
#include "IsoTriangle.h"

using namespace std;

IsoTriangle::IsoTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A) {
    _name = "Равнобедренный треугольник";
}