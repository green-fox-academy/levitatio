#include <iostream>
#include <string>

using namespace std;

string palindorBuilder (string baseStr);

int main() {
    cout << palindorBuilder("greenfox") << endl;
    cout << palindorBuilder("123") << endl;
    return 0;
}

string palindorBuilder (string baseStr)
{
    string result = baseStr;
    int lengthOfBaseStr = baseStr.length();
    for (int i = 0; i < lengthOfBaseStr; ++i) {
        result += baseStr[lengthOfBaseStr - (i + 1)];

    }
    return result;
}