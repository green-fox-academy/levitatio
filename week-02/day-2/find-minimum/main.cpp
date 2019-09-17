#include <iostream>

using namespace std;

int *minOfArray (int *array, int size);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    cout << *minOfArray(numbers, 7);
    return 0;
}

int *minOfArray (int *array, int size)
{
    int *temp = array;
    for (int i = 0; i < size; ++i) {
        if (*(array + i) < *temp) {
            temp = (array + i);
        }
    }
    return temp;

}