#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copyFile (const string &sourceFileName, const string &targetFileName);

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

int main() {

    if (copyFile("..//source.txt", "..//target.txt") ) {
        cout << "Copy of source.txt was successful" << endl;
    }else {
        cout << "Copy of source.txt was unsuccessful" << endl;
    }
    if (copyFile("..//source1.txt", "..//target1.txt")) {
        cout << "Copy of source1.txt was successful" << endl;
    }else {
        cout << "Copy of source1.txt was unsuccessful" << endl;
    }
    return 0;
}

bool copyFile (const string &sourceFileName, const string &targetFileName)
{
    bool result = false;
    ifstream sourceFile;
    ofstream targetFile;
    sourceFile.open(sourceFileName);
    targetFile.open(targetFileName);

    if (!sourceFile.is_open()) {
        cout << "Source file can not be opened" << endl;
    } else if(!targetFile.is_open()) {
        cout << "Target file can not be opened" << endl;
    } else {
        string text;
        while (getline(sourceFile, text)) {
            const char *tempText = text.c_str();
            targetFile.write (tempText, text.size());
            targetFile.put('\n');
        }
        result = true;
    }
    targetFile.close();
    sourceFile.close();
    return result;

}