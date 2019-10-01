
#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar() {
    _numberOfStrings = 6;
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
}

void ElectricGuitar::play() {
    std::cout << "Electric Guitar, a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
    std::cout << std::endl;
}

void ElectricGuitar::sound() {
    std::cout << "Twang";
}
