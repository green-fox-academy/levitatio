#include "Animal.h"

Animal::Animal() : _hunger(50), _thirst(50) {}

void Animal::eat() {
    _hunger--;
}
void Animal::drink() {
    _thirst--;
}
void Animal::play() {
    _thirst++;
    _hunger++;
}

bool Animal::operator> (const Animal &animal){
      return this->_hunger > animal._hunger;
}
bool Animal::operator< (const Animal &animal){
    return this->_hunger < animal._hunger;
}