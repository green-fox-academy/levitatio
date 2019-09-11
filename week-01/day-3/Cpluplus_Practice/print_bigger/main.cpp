#include <iostream>

int main(int argc, char* args[]) {

    double firstNumber, secondNumber;

    std::cout << "First Number:"; std::cin>>firstNumber;
    std::cout << "Second Number:"; std::cin>>secondNumber;

    if (firstNumber > secondNumber) {
        std::cout << "First Number is bigger. \n ";
    }else if (secondNumber > firstNumber){
        std::cout << "Second Number is bigger. \n ";
    }else if (firstNumber == secondNumber) {
        std::cout << "These are equal. \n ";
    }else {
        std::cout << "Epic fail \n ";
    }

    return 0;
}