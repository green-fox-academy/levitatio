#include <iostream>
#include "Station.h"
#include "Car.h"

Station::Station(int gasAmount) : _gasAmount(gasAmount){}

void Station::fill(Car &car) {
    while (!car.isFull()){
        _gasAmount--;
        car.fill();
        std::cout << "Filling car" << std::endl;
    }
    std::cout << "Remaining gas amount of station: " << _gasAmount << std::endl;
}
