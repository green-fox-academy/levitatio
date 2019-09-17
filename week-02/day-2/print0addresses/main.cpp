#include <iostream>

using namespace std;
int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int numbers[5];
    cout << " ";
    for (int i = 0; i < 5 ; ++i) {
        cout << i + 1 << ". number: ";
        cin >> numbers[i];
    }
    cout << "Addresses of numbers" << endl;
    for (int j = 0; j < 5 ; ++j) {
        cout << numbers + j << endl;
    }
    return 0;
}