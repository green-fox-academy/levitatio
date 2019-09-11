#include <iostream>

int main(int argc, char* args[]) {

    double distanceInMiles = 0;
    double ratioMilesToKilometer = 1.60934;

    std::cout << "Please type the distance in miles!" << std::endl;
    std::cin >> distanceInMiles;
    std::cout << "This distance is " << distanceInMiles * ratioMilesToKilometer << " km.\n";


    return 0;
}