#include "Tree.h"

Tree::Tree() : Plant() {}

Tree::Tree(std::string color, float water) : Plant(color, water)  {}

void Tree::printState() {
    if (_currentWater >= 10) {
        std::cout << "The " << _color << " Tree doesn't need water.\n";
    }else {
        std::cout << "The " << _color << " Tree needs water.\n";
    }
}

void Tree::watering(float amountWater) {
    _currentWater += amountWater * 0.4f;
}

bool Tree::isThirsty() {
    return _currentWater < 10;
}
