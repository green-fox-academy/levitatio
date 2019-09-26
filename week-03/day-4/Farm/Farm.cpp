#include "Farm.h"
#include <algorithm>

Farm::Farm() :_freePlaces(3) {}

void Farm::breed(Animal animal) {
    if(_freePlaces <= 0) {
        slaughter();
    }
    _animals.push_back(animal);
    _freePlaces--;
}

void Farm::slaughter() {
    std::sort (_animals.begin(), _animals.end());
    _animals.erase(_animals.begin());

}

