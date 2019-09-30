#include <iostream>
#include "Garden.h"

int main() {

    Flower flower("yellow", 4);
    Flower flower2 ("blue", 3);
    Tree tree ("purple", 9);
    Tree tree2 ("orange", 8);

    Garden garden;
    garden.addFlower(&flower);
    garden.addFlower(&flower2);
    garden.addTree(&tree);
    garden.addTree(&tree2);

    garden.printGardenState();

    garden.watering(40);
    garden.watering(70);

    return 0;
}