#include "BassGuitar.h"

BassGuitar::BassGuitar()  {
    _numberOfStrings = 4;
}

BassGuitar::BassGuitar(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
}

void BassGuitar::play() {
    std::cout << "Bass Guitar, a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
    std::cout << std::endl;
}

void BassGuitar::sound() {
    std::cout << "Duum-duum-duum";

}
