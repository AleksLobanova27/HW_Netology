#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double a, double b)
    : Quadriateral(a, b, a, b, 90, 90, 90, 90) {
    _name = "Прямоугольник";
}