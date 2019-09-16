#include <iostream>
#include <string>

using namespace std;

void palindromeSearching (string baseStr, string palnindromes[]);
bool isPalindromeCore (string);
int palindromeCoreIndexSearching (string);



int main() {

    string palindromes[100];
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void palindromeSearching (string baseStr, string palnindromes[])
{

    int lengthOfBaseStr = baseStr.length();
    for (int i = 0; i < lengthOfBaseStr - 2; ++i) {
        if (baseStr[i] != baseStr [i + 2]) {
            continue;                               //can not be a palindrome
        }else {
            for (int j = 0; j < ; ++j) {

            }

        }

        bool isPalindrome = true;
        int index = i;
        while (isPalindrome && index < (lengthOfBaseStr -i)/2) {
            if (baseStr[index] != baseStr[lengthOfBaseStr - (index + 1)]) {
                isPalindrome = false;
            }
            index++;
        }
    }
}

int palindromeCoreIndexSearching (string sourceString)
{

}