#ifndef PIRATES_ARMADA_H
#define PIRATES_ARMADA_H


#include "Ship.h"

class Armada {
public:
    Armada ();

    void addShip(Ship ship);
    bool war (Armada &armada);

    int getNumberOfShip ();
    Ship getShip (int index);
    Ship& getShipToSet ();
private:
    std::vector<Ship> _ships;


};


#endif //PIRATES_ARMADA_H
