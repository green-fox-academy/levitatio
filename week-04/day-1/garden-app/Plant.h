#ifndef GARDEN_APP_PLANT_H
#define GARDEN_APP_PLANT_H

#include <iostream>
#include <string>

class Plant {
public:
    Plant ();
    Plant (std::string color, float water);

    virtual void printState ();
    virtual bool isThirsty ();
protected:
    float _currentWater;
    std::string _color;
};


#endif //GARDEN_APP_PLANT_H
