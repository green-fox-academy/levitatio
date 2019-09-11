#include <iostream>

int main(int argc, char* args[]) {

    int chickens = 0;
    int pigs = 0;

    std::cout<<"Number of chickens: "; std::cin>>chickens;
    std::cout<<"Number of pigs: "; std::cin>>pigs;

    std::cout<<"\n Number of legs: "<< (chickens * 2) + (pigs * 4);
    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    return 0;
}