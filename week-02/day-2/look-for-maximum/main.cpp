#include <iostream>

using namespace std;

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int lengthOfArray;
    cout << "Number of numbers: ";
    cin >> lengthOfArray;
    int numbers[lengthOfArray];

    for (int i = 0; i < lengthOfArray; ++i) {
        cout << i + 1<< ". number: ";
        cin >> *(numbers + i);
    }

    int temp = *numbers;
    for (int j = 0; j < lengthOfArray; ++j) {
        if (*(numbers + j) > temp) {
            temp = *(numbers + j);
        }
    }
    cout << "the biggest one: " << temp << " it's addresses: " << &temp;


    return 0;
}