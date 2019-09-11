#include <iostream>

int main(int argc, char* args[]) {

    int number1, number2, number3, number4, number5, sum = 0 ;
    float average;

    std::cout<<" First number: "; std::cin>>number1;
    std::cout<<"Second number: "; std::cin>>number2;
    std::cout<<"Third number: "; std::cin>>number3;
    std::cout<<"Fourth number: "; std::cin>>number4;
    std::cout<<"Fifth number: "; std::cin>>number5;

    sum = number1 + number2 + number3 + number4 + number5;

    std::cout<<"Sum of the numbers: "<< sum << std::endl;

    average = sum / 5.;

    std::cout<<"Average of the numbers: "<<average;
    return 0;
}