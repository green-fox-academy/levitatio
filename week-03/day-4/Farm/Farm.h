#ifndef FARM_FARM_H
#define FARM_FARM_H


#include <vector>
#include "Animal.h"

class Farm {
public:
    Farm ();

    void slaughter ();
    void breed (Animal);
    void searchLeastHungryAnimal ();

private:
    std::vector<Animal> _animals;
    int _freePlaces;
};


#endif //FARM_FARM_H
