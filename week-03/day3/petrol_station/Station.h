#ifndef PETROL_STATION_STATION_H
#define PETROL_STATION_STATION_H

#include "Car.h"

class Station {
    int _gasAmount;

public:
    Station (int gasAmount);
    void fill (Car &car);
};


#endif //PETROL_STATION_STATION_H
