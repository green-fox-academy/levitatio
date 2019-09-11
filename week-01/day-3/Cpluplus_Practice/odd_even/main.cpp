#include <iostream>

int main(int argc, char* args[]) {

    int number = 0;

    std::cout<<"Number:"; std::cin>>number;
    (number % 2) == 1 ? std::cout<<"This number is odd \n" : std::cout<<"This number is even";

    return 0;
}