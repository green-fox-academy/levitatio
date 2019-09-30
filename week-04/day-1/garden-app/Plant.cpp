#include "Plant.h"

Plant::Plant() : _color("green"), _currentWater(0.0f) {

}

Plant::Plant(std::string color, float water) : _color(color), _currentWater(water) {}

void Plant::printState() {

}

bool Plant::isThirsty() {
    return false;
}
