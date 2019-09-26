#include <iostream>

#include "DiceSet.h"

int main(int argc, char* args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();
    int rollCounter = 0;
    for (int i = 0; i < 6; ++i) {
        while (diceSet.getCurrent(i) != 6) {
            diceSet.roll(i);
            rollCounter++;
        }
    }

    std::cout << "You reached the goal with: " << rollCounter << " rolls" ;

    return 0;
}