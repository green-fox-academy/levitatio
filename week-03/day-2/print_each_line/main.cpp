#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

    ifstream myFile;
    myFile.exceptions(ifstream::failbit | ifstream::badbit);
    try {
        myFile.open("..\\B.txt");
    }catch (ifstream::failure &exceptionVariable) {
        cout << exceptionVariable.what() << endl;
    }
    string text;
    while (getline(myFile, text)) {
        cout << text << endl;
    }


    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file first.

    return 0;
}