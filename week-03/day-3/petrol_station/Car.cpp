#include "Car.h"

Car::Car(int gasAmount, int capacity) :_gasAmount(gasAmount), _capacity(capacity){}

bool Car::isFull() {
    if(_gasAmount == _capacity) {
        return true;
    }
    return false;
}

void Car::fill() {
    _gasAmount++;
}