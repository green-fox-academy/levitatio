#include "Ship.h"

Ship::Ship() {}

int Ship::getNumberOfAliveOfCrew() {
    return _alivePirates.size();
}

int Ship::getCaptainState() {
    return _captain.getState();
}

int Ship::getCaptainConsumedRum() {
    return _captain.getConsumedRum();
}

void Ship::fillShip(Pirate pirate) {
    _captain = pirate;
    int numberOfCrew = randomIntGenerator (0 ,50);
    for (int i = 0; i < numberOfCrew; ++i) {
        _alivePirates.push_back(Pirate());
    }
}

bool Ship::battle(Ship &otherShip) {
    int thisShipScore = this->getNumberOfAliveOfCrew() + this->getCaptainConsumedRum();
    int otherShipScore = otherShip.getNumberOfAliveOfCrew() + otherShip.getCaptainConsumedRum();
    if (thisShipScore >= otherShipScore) {
        this->partyAfterBattle();
        otherShip.funeral();
        return true;
    }
    this->funeral();
    otherShip.partyAfterBattle();
    return false;
}

void Ship::funeral () {
    int numberOfDeadPirates = randomIntGenerator(0, getNumberOfAliveOfCrew());
    _alivePirates.erase(_alivePirates.end() - numberOfDeadPirates, _alivePirates.end());
}

void Ship::partyAfterBattle() {
    int amountOfRum = randomIntGenerator(0, getNumberOfAliveOfCrew() + 1);
    if (!amountOfRum) {
        drinkPirateRum(0, true);
        amountOfRum--;
        for (int i = 0; i < amountOfRum ; i++) {
            _alivePirates.at(i).drinkSomeRum();
        }
    }
}

void Ship::drinkPirateRum(int index, bool isCaptain) {
    if (isCaptain) {
        _captain.drinkSomeRum();
    }else {
        _alivePirates.at(index).drinkSomeRum();
    }
}
