#include <iostream>
#include <vector>
#include "Station.h"

std::vector<Car> initializeCars () {
    std::vector<Car> result;
    result.push_back(Car(2,5));
    result.push_back(Car(0,7));
    result.push_back(Car(3,4));
    result.push_back(Car(4,4));
    result.push_back(Car(2,6));

    return result;
}

int main() {

    std::vector<Car> cars = initializeCars();
    Station station(30);
    for (int i = 0; i < cars.size(); ++i) {
        station.fill(cars.at(i));
    }
    return 0;
}