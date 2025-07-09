#include <iostream>
#include "Parallelogram.h"

using namespace std;

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadriateral(a, b, a, b, A, B, A, B) {
    _name = "ֿאנאככוכמדנאלל";
}