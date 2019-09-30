#include "Garden.h"

Garden::Garden() {}

void Garden::addTree(Tree *tree) {
    _trees.push_back(tree);
}

void Garden::addFlower(Flower *flower) {
    _flowers.push_back(flower);
}

void Garden::watering(float amountWater) {
    std::cout << "Watering with " << amountWater << std::endl;

    int numberThirstyPlants = numberOfThirstyPlants();
    float amountWaterPerPlant = amountWater / float(numberThirstyPlants);
    for (int i = 0; i < _flowers.size(); i++){
        if (_flowers.at(i)->isThirsty()){
            _flowers.at(i)->watering(amountWaterPerPlant);
        }
    }
    for (int i = 0; i < _trees.size(); i++){
        if (_trees.at(i)->isThirsty()){
            _trees.at(i)->watering(amountWaterPerPlant);
        }
    }
    printGardenState();
}

int Garden::numberOfThirstyPlants() {
    int result = 0;
    for (int i = 0; i < _trees.size(); i++){
        if (_trees.at(i)->isThirsty()){
            result++;
        }
    }
    for (int j = 0; j < _flowers.size() ; ++j) {
        if (_flowers.at(j)->isThirsty())
            result++;
    }
    return result;
}

void Garden::printGardenState() {
    for (int i = 0; i < _flowers.size(); ++i) {
        _flowers.at(i)->printState();
    }
    for (int j = 0; j < _trees.size(); ++j) {
        _trees.at(j)->printState();
    }
    std::cout << std::endl;

}
