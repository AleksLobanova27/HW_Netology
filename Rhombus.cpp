#include <iostream>
#include "Rhombus.h"

using namespace std;

Rhombus::Rhombus(double a, double A, double B)
    : Quadriateral(a, a, a, a, A, B, A, B) {
    _name = "Ромб";
}