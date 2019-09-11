#include <iostream>

int main(int argc, char* args[]) {

    int firstNumber = 22;
    int secondNumber = 13;

    std::cout<< "sum of the numbers: " << firstNumber + secondNumber << std::endl;

    std::cout<< "difference of the numbers: " << firstNumber - secondNumber << std::endl;

    std::cout<< "multiplication of numbers: " << firstNumber * secondNumber << std::endl;// Print the result of 22 multiplied by 13

    std::cout<< "ratio of numbers: " << (firstNumber) / float(secondNumber) << std::endl;

    std::cout<< "integer of ratio of numbers: " << firstNumber / secondNumber << std::endl;

    std::cout<< "remainder of numbers: " << firstNumber % secondNumber << std::endl;

    return 0;
}