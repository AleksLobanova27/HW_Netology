#include <iostream>
#include "Class.h"

Counter::Counter(int value) : _value{value}{}

void Counter::increment() { _value++; }

void Counter::decrement() { _value--; }

int Counter::getValue() { return _value; }