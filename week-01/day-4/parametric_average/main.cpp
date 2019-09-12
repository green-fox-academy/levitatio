#include <iostream>

int main() {

    int numberOfInteger;
    double sum = 0;
    int tempNumber;
    std::cout << "Number of integers: " << std::endl;
    std::cin >> numberOfInteger;

    for (int i = 0; i < numberOfInteger; i++) {


        std::cout<< i <<". integer: ";
        std::cin>>tempNumber;
        sum += tempNumber;
    }

    std::cout<<"Sum: "<<sum<<",  Average: "<<sum/numberOfInteger;
    return 0;
}