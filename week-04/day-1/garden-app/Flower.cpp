#include "Flower.h"

Flower::Flower() : Plant() {}

Flower::Flower(std::string color, float water) : Plant(color, water) {

}

void Flower::printState() {
    if (_currentWater >= 5) {
        std::cout << "The " << _color << " Flower doesn't need water.\n";
    }else {
        std::cout << "The " << _color << " Flower needs water.\n";
    }
}

void Flower::watering(float amountWater) {
    _currentWater += amountWater * 0.75f;
}

bool Flower::isThirsty() {
    return _currentWater < 5;
}
