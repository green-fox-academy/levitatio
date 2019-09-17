#include <iostream>

int *maxOfArray(int *array, int size);

int main()
{
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality
    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    std::cout << *maxOfArray(numbers, 7);
    return 0;
}

int *maxOfArray(int *array, int size)
{
    int *temp = array;
    for (int i = 0; i < size; ++i) {
        if (*(array + i) > *temp) {
            temp = (array + i);
        }
    }
    return temp;
}