#include <iostream>
#include <string>
#include "Figure.h"

using namespace std;

Figure::Figure(int sides, const std::string& name)
    : _numSides(sides), _name(name) {
}

int Figure::getNumSides() const {
    return _numSides;
}

std::string Figure::getName() const {
    return _name;
}
