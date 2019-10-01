#include "Violin.h"

Violin::Violin() {
    _numberOfStrings = 4;
}

Violin::Violin(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
}

void Violin::play() {
    std::cout << "Violin, a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();
    std::cout << std::endl;
}

void Violin::sound() {
    std::cout << "Screech";
}
