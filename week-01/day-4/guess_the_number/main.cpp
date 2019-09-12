#include <iostream>

int main() {

    int mysteriousNumber = 11;
    int actualGuessedNumber = 0;

    std::cout << "Hy! Try to figure my number between 0 and 20" << std::endl;

    while (actualGuessedNumber != mysteriousNumber) {

        std::cout<<"Your tip:";
        std::cin>>actualGuessedNumber;

        if (actualGuessedNumber < mysteriousNumber) {
            std::cout<<"The stored number is higher \n";
        }else if (actualGuessedNumber > mysteriousNumber) {
            std::cout<<"The stored number is lower \n";
        }else if (actualGuessedNumber == mysteriousNumber) {
            std::cout<<"You found the number: " << mysteriousNumber;
        }else {
            std::cout<<" Epic fail \n";
        }
    }

    return 0;
}