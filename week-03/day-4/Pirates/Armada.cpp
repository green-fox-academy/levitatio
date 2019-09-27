#include "Armada.h"

Armada::Armada() {

}
void Armada::addShip(Ship ship) {
    _ships.push_back(ship);
}

Ship Armada::getShip(int index) {
    return Ship();
}

int Armada::getNumberOfShip() {
    return _ships.size();
}

bool Armada::war(Armada &otherArmada) {
    int indexThisShips = 0;
    int indexOtherShips = 0;

    while (indexThisShips < getNumberOfShip() &&
            indexOtherShips < otherArmada.getNumberOfShip())  {
        bool resultBattle = _ships.at(indexThisShips).battle(otherArmada._ships.at(indexOtherShips));
        if (resultBattle) {
            indexOtherShips++;
        }else {
            indexThisShips++;
        }
    }

    if (indexThisShips < getNumberOfShip()) {
        return true;
    }
    return false;
}
