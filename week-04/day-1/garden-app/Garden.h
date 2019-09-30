#ifndef GARDEN_APP_GARDEN_H
#define GARDEN_APP_GARDEN_H


#include <vector>
#include "Flower.h"
#include "Tree.h"

class Garden {
public:
    Garden ();
    void addTree (Tree*);
    void addFlower (Flower*);

    void watering (float amountWater);
    int numberOfThirstyPlants ();
    void printGardenState ();

private:
    std::vector<Flower*> _flowers;
    std::vector<Tree*> _trees;
};


#endif //GARDEN_APP_GARDEN_H
