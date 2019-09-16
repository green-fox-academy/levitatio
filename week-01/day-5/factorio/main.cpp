#include <iostream>
#include <string>

void factorio (int inputNumber, int& result);

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.
    int result = 1;
    factorio (2, result);
    std::cout << result << std::endl;
    result = 1;
    factorio (5, result);
    std::cout << result << std::endl;
    result = 1;
    factorio (10, result);
    std::cout << result << std::endl;

    return 0;
}

void factorio (int inputNumber, int& result)
{
    if (inputNumber >= 1){
        result *= inputNumber;
        factorio (inputNumber-1, result);
    }
}