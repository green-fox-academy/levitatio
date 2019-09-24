#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Create a program that decrypts the file called "reversed-lines.txt",
    // and pritns the decrypred text to the terminal window.

    ifstream sourceFile;
    sourceFile.open("..\\reversed-lines.txt");
    if (!sourceFile.is_open()){
        cout << "Epic fail"<<endl;
        return -1;
    }
    string tempStr;
    while (getline(sourceFile, tempStr)) {
        int stringSize = tempStr.size();
        for (int i = 0; i < stringSize; i++) {
            cout << tempStr[stringSize - 1 - i];
        }
        cout << endl;
    }
    sourceFile.close();
    return 0;
}