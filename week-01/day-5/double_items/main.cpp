#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList[] = {3, 4, 5, 6, 7};
    int sizeOf_numList = sizeof(numList) / sizeof(numList[0]);

    for (int i = 0; i < sizeOf_numList; ++i) {
        numList[i] +=numList[i];
    }
    for (int j = 0; j < sizeOf_numList; ++j) {
        std::cout << numList[j] <<" ";
    }
    return 0;
}