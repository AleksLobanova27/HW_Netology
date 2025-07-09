#include <iostream>
#include "Squere.h"

using namespace std;

Squere::Squere(double a)
    : Quadriateral(a, a, a, a, 90, 90, 90, 90) {
    _name = " вадрат";
}