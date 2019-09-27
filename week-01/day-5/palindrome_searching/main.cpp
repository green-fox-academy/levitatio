#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool  isPalindrome (const string& str);
vector<string> searchPalindromes (const string& subString);
void printPalindromes (const vector<string>& palindromes, const string& originString);


int main() {

    string sourceString1 = "dog goat dad duck doodle never";
    string sourceString2 = "apple";
    string sourceString3 = "racecar";
    string sourceString4 = "";

    printPalindromes(searchPalindromes(sourceString1), sourceString1);
    printPalindromes(searchPalindromes(sourceString2), sourceString2);
    printPalindromes(searchPalindromes(sourceString3), sourceString3);
    printPalindromes(searchPalindromes(sourceString4), sourceString4);
    return 0;
}

vector<string> searchPalindromes (const string& sourceString)
{
    vector<string> result;

    for (int i = 0; i < sourceString.size(); i++) {
        int startIndexOfSubString = i;
        for (int j = 1; i + j <= sourceString.size(); j ++) {
                int lengthOfSubstring = j;
                //substr() is function from STL
                string observedSubstring = sourceString.substr(startIndexOfSubString, lengthOfSubstring);
                if (isPalindrome(observedSubstring)) {
                    result.push_back(observedSubstring);
                }
            }
        }
    return result;
}

bool isPalindrome (const string& subString)
{
    int sizeOfHalfSubString;
    if (subString.size() < 3) {
        return false;
    }
    if (subString.size() % 2 == 0){
        sizeOfHalfSubString = subString.size() / 2;
    } else {
        sizeOfHalfSubString = (subString.size() - 1) / 2;
    }

    for (int i = 0; i < sizeOfHalfSubString; i++) {
        if (subString.at(i) != subString.at(subString.size() - 1 - i)){
            return false;
        }
    }
    return true;
}
void printPalindromes (const vector<string>& palindromes, const string& originString)
{
    cout << "palindromes in \"" << originString << "\": [";
    for (int i = 0; i < palindromes.size(); ++i) {
        cout << "\"" <<palindromes.at(i) << "\"";
        if (i != palindromes.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]"<<endl;
}