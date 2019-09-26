#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countLinesInFile (const string &nameOfFile);

int main () {

    try {
        cout << countLinesInFile("..//test.txt");
    }catch (ifstream::failure &exceptionVariable) {
        cout << exceptionVariable.what() << endl;
    }
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file.
    return 0;
}

int countLinesInFile (const string &nameOfFile)
{
    int result = 0;
    ifstream myFile;
    myFile.open(nameOfFile);

    char c = ' ';
    bool isEndOfFile = myFile.eof();
    while (!isEndOfFile) {
        myFile.get(c);

        if (c == '\n')
            result++;
        if (result == 9) {
           cout << " "; ;
        };
        isEndOfFile = myFile.eof();
    }
    myFile.close();
    return result;
}