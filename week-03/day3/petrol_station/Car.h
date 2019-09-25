#ifndef PETROL_STATION_CAR_H
#define PETROL_STATION_CAR_H


class Car {
    int _gasAmount;
    int _capacity;

public:
    Car (int gasAmount, int capacity);
    bool isFull();
    void fill();
};


#endif //PETROL_STATION_CAR_H
