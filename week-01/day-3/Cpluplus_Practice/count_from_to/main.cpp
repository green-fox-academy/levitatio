#include <iostream>

int main(int argc, char* args[]) {

    int firstNumber, secondNumber;

    std::cout << "First number:"; std::cin>>firstNumber;
    std::cout << "Second number:"; std::cin>>secondNumber;

    if (secondNumber <= firstNumber) {
        std::cout<<"The second should be bigger \n";
    }else {
        for (int i= firstNumber; i< secondNumber; i++) {
            std::cout<<i<< std::endl;
        }

    }

    return 0;
}