#include <iostream>

int main(int argc, char* args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;

    std::cout<<"BMI index: " << massInKg / (heightInM*heightInM);

    return 0;
}