#include <iostream>

int main(int argc, char* args[]) {

    for (int i=0; i<=500; i++){
        if ((i % 2) == 0)   std::cout << i <<"\t";
    }

    return 0;
}