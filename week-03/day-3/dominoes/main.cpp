#include <iostream>
#include <vector>

#include "Domino.h"

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int searchIndexOfNextDomino (Domino &currentD, std::vector<Domino> &dominoes)
{
    int result = 0;
    for (int i = 0; i < dominoes.size(); ++i) {
        if(currentD.getValues().second == dominoes.at(i).getValues().first){
            result = i;
            return result;
        }
    }
    return result;
}

int main(int argc, char* args[])
{
    std::vector<Domino> dominoes = initializeDominoes();
    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...
    Domino tempDomino(0,0);
    for (int i = 0; i < dominoes.size() - 1; ++i) {
        int indexOfNextDomino = searchIndexOfNextDomino(dominoes.at(i), dominoes);
        if (indexOfNextDomino != i + 1) {
            tempDomino = dominoes.at(i + 1);
            dominoes.at(i + 1) = dominoes.at(indexOfNextDomino);
            dominoes.at(indexOfNextDomino) = tempDomino;
        }
    }

    for (int j = 0; j < dominoes.size(); ++j) {
        std::cout << dominoes.at(j).toString() << std::endl;

    }

    return 0;
}