#include <iostream>

int findValue (int *array, int length, int value);

int main() {
    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    std::cout << "index of 87: " << findValue(numbers, 7, 87) << std::endl;
    std::cout << "index of 13: " << findValue(numbers, 7, 13) << std::endl;

    return 0;
}

int findValue (int *array, int length, int value)
{
    int index = -1;
    for (int i = 0; i < length; ++i) {
        if (*(array + i) == value) {
            index = i;
        }
    }
    return index;
}