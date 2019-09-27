#include <iostream>
#include "Pirate.h"
#include <time.h>


int randomIntGenerator (int from, int to) {
    srand(time(nullptr));
    return  (int) (rand() % (to - from + 1)) + (from);
}


Pirate::Pirate() : _state(0), _consumedRum(0) {}

void Pirate::drinkSomeRum() {
    _consumedRum++;
}

void Pirate::howsItGoingMate() {
    if (_consumedRum < 5 && _consumedRum >= 0) {
        std::cout <<"Pour me anudder! \n";
    } else {
        std::cout <<"Arghh, I'ma Pirate. How d'ya d'ink its going?\n";
    }
}

void Pirate::die () {
    _state = 2;
}
void Pirate::passedOut () {
    _state = 1;
}

void Pirate::brawl (Pirate &anotherPirate) {
    switch (randomIntGenerator(0, 2)) {
        case 0 : this->die(); break;
        case 1 : anotherPirate.die(); break;
        default: {
            this->passedOut();
            anotherPirate.passedOut();
            break;
        }
    }
}


bool Pirate::isAlive() {
    return !isDead();
}
bool Pirate::isDead() {
    return _state == 2;
}
bool Pirate::isPassedOut() {
    return _state == 1;
}

int Pirate::getState() {
    return _state;
}

int Pirate::getConsumedRum() {
    return _consumedRum;
}
