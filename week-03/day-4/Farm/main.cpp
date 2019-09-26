#include <iostream>
#include "Farm.h"

int main() {
    Animal duck, dog, cat, horse;
    Farm firstFarm;

    duck.play();
    duck.play();
    dog.play();
    firstFarm.breed(duck);
    firstFarm.breed(dog);
    firstFarm.breed(cat);
    firstFarm.breed(horse);




    return 0;
}