#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

int main() {

    ifstream sourceFile;
    sourceFile.open("..\\logs.txt");
    if (!sourceFile.is_open()){
        cout << "Epic fail"<<endl;
        return -1;
    }
    string tempStr;
    vector<string> fileRows;
    while (getline(sourceFile, tempStr)) {
        istringstream ss(tempStr);
        fileRows.push_back(tempStr);
    }
    int numberOfRows = fileRows.size();
    for (int i = 0; i < numberOfRows; ++i) {
        cout << fileRows.at(numberOfRows - 1 - i) <<endl;

    }
    sourceFile.close();
    return 0;
}