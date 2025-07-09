#include <iostream>
#include "EquTriangle.h"

using namespace std;

EquTriangle::EquTriangle(double a)
    : Triangle(a, a, a, 60, 60, 60) {
    _name = "Равносторонний треугольник";
}