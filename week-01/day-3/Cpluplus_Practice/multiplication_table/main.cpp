#include <iostream>

int main(int argc, char* args[]) {

    int number;
    std::cout << "Number:" ; std::cin>> number;

    for (int i=1; i<=10; i++) {
        std::cout<<" 1 * "<< number<<" = "<< i * number<< std::endl;
    }
    return 0;
}