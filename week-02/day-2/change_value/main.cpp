
#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *ptrToTemperature = &temperature;
    *ptrToTemperature = 20.4;
    std:: cout << *ptrToTemperature;

    return 0;
}