#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Create a program that decrypts the file called "reversed-order.txt",
    // and pritns the decrypred text to the terminal window.

    ifstream sourceFile;
    sourceFile.open("..\\reversed-order.txt");
    if (!sourceFile.is_open()){
        cout << "Epic fail"<<endl;
        return -1;
    }
    string tempStr;
    vector<string> fileRows;
    while (getline(sourceFile, tempStr)) {
        fileRows.push_back(tempStr);
    }
    int numberOfRows = fileRows.size();
    for (int i = 0; i < numberOfRows; ++i) {
        cout << fileRows.at(numberOfRows - 1 - i) <<endl;

    }
    sourceFile.close();
    return 0;
}