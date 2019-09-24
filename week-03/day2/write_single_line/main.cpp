#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ofstream myFile;
    myFile.open("my-file.txt");

    if (myFile.is_open()) {
        myFile.write("Balogh Levente", 14);
    } else {
        cout << "Can not open the file" << endl;
    }
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    myFile.close();
    return 0;
}