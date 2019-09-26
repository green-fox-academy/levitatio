#include "Counter.h"

Counter::Counter() : _number(0), _numberInitialValue(0) {}

Counter::Counter(int number) : _number(number), _numberInitialValue(number) {}

int Counter::get() {
    return _number;
}
void Counter::add() {
    _number++;
}

void Counter::add(int number) {
    _number += number;
}

void Counter::reset() {
    _number = _numberInitialValue;
}