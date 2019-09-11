#include <iostream>

int main(int argc, char* args[]) {

    int numberOfLine;
    std::cout << "Number of line:" ;std::cin>> numberOfLine;

    for (int i=1; i <= numberOfLine; i++) {
        for (int n=0; n<i; n++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return 0;
}