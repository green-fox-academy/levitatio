#include <iostream>
#include <string>

void unique (int list[], int& size);

int main(int argc, char* args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int lengthONumber = sizeof(numbers) / sizeof(numbers[0]);
    unique(numbers, lengthONumber);
    for (int i = 0; i < lengthONumber ; ++i) {
        std::cout << numbers[i] << " ";
    }
    //  should print: `[1, 11, 34, 52, 61]`

    return 0;
}

void unique (int list[], int& size)
{
    int tempList[size];
    bool isSameNumber;
    int elementOfTempList = 0;

    for (int i = 0; i < size; ++i) {
        int j = 0;
        isSameNumber = false;
        while (!isSameNumber && j < elementOfTempList) {
            if (tempList[j] == list[i]) {
                isSameNumber = true;

            }
            j++;
        }
        if (!isSameNumber){
            tempList [elementOfTempList] = list[i];
            elementOfTempList++;
        }
    }
    size = elementOfTempList;
    for (int k = 0; k < size ; ++k) {
            list[k] = tempList[k];
    }
}