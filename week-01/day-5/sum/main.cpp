#include <iostream>
#include <string>

int sum (int endNumber = 0);

int main(int argc, char* args[]) {

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter
    int parameters = 111;
    std::cout << sum (10) << std::endl;
    std::cout << sum (parameters);
    return 0;
}

int sum (int endNumber)
{
    return ((endNumber - 1) * endNumber)/2;
}