#include <iostream>

int main(int argc, char* args[]) {

    for (int i=1; i<=100; i++){

        if ( ((i % 3) == 0) && ((i % 5) != 0) ) {
            std::cout<<"Fizz \t";
        }else if ( ((i % 3) != 0) && ((i % 5) == 0) ) {
            std::cout<<"Buzz \t";
        }else if ( ((i % 3) == 0) && ((i % 5) == 0) ) {
            std::cout<<"FizzBuzz \t";
        }else {
            std::cout<<i<<"\t";
        }
    }

    return 0;
}