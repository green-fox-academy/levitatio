#ifndef GARDEN_APP_FLOWER_H
#define GARDEN_APP_FLOWER_H

#include "Plant.h"

class Flower : public Plant {
public:
    Flower ();
    Flower (std::string color, float water);
    virtual void printState ();
    virtual bool isThirsty ();
    void watering (float amountWater);
};


#endif //GARDEN_APP_FLOWER_H
