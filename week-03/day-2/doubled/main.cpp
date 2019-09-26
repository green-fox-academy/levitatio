#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Create a program that decrypts the file called "duplicated-chars.txt",
    // and pritns the decrypred text to the terminal window.
    ifstream sourceFile;
    sourceFile.open("..\\duplicated-chars.txt");
    if (!sourceFile.is_open()){
        cout << "Epic fail"<<endl;
        return -1;
    }
    string tempStr;
    while (getline(sourceFile, tempStr)) {
        for (int i = 0; i < tempStr.size(); i+=2) {
            cout << tempStr[i];
        }
        cout << endl;
    }
    sourceFile.close();



    return 0;
}