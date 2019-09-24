#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeInToFile (const string &path, const string &word, int number);

int main() {

    writeInToFile("..\\test.txt", "apple", 4);
    return 0;
}

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void writeInToFile (const string &path, const string &word, int number)
{
    ofstream myFile;

    const char *tempWord = word.c_str();

    myFile.open(path);
    if (myFile.is_open()) {
        for (int i = 0; i < number; ++i) {
            myFile.write(tempWord, word.length() );
            myFile << '\n';

        }
    }else {
        cout << "Can not open this file" << endl;
    }
    myFile.close();
}