#ifndef PIRATES_SHIP_H
#define PIRATES_SHIP_H

#include <vector>
#include "Pirate.h"

int randomIntGenerator(int, int);

class Ship {
public:
    Ship ();
    void fillShip (Pirate pirate);

    int getCaptainConsumedRum ();
    int getCaptainState ();
    int getNumberOfAliveOfCrew () ;

    bool battle (Ship &ship);
    void funeral();
    void partyAfterBattle ();

    void drinkPirateRum (int index = 0, bool isCaptain = false);

private:
    std::vector<Pirate> _alivePirates;
    Pirate _captain;


};

#endif //PIRATES_SHIP_H
