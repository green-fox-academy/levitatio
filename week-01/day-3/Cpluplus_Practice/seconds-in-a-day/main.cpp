#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    std::cout << "Remaining seconds of this day " << (86400 - (currentHours*3600) - (currentMinutes*60) - currentSeconds) <<std::endl;
    return 0;
}