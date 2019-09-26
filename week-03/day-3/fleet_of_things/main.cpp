#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    Thing thing("Get milk");
    fleet.add(thing);
    thing = {"Remove the obstacles"};
    fleet.add(thing);
    thing = {"Stand up"};
    thing.complete();
    fleet.add(thing);
    thing = {"Eat lunch"};
    thing.complete();
    fleet.add(thing);
    //   You have the `Thing` class
    // - You have the `Fleet` class
    // - You have the `FleetOfThings` class with a `main` method
    // - Download those, use those
    // - In the main method create a fleet
    // - Achieve this output:
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch

    std::cout << fleet.toString() << std::endl;
    return 0;
}