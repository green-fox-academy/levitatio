#include <iostream>

int main(int argc, char* args[]) {

    int number;
    std::cout << "Number" << std::endl;
    std::cin >> number;

    if (number <= 0) {
        std::cout<<"Not enough! \n";

    }else if (number == 1){
        std::cout<<"One \n";

    }else if (number == 2){
        std::cout<<"Two \n";

    }else if (number > 2){
        std::cout<<"A lot";
    }else {
        std::cout<<"Epic fail";
    }

    return 0;
}