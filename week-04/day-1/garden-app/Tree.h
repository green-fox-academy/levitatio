#ifndef GARDEN_APP_TREE_H
#define GARDEN_APP_TREE_H


#include "Plant.h"

class Tree : public Plant{
public:
    Tree ();
    Tree (std::string color, float water);

    virtual void printState ();
    virtual bool isThirsty ();
    void watering (float amountWater);

};


#endif //GARDEN_APP_TREE_H
