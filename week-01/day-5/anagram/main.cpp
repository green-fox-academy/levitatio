#include <iostream>
#include <iostream>

using namespace std;
bool isAnagram (string, string);

int main() {
    cout << "dog and god are anagram? " << isAnagram("dog", "god") << std::endl;
    cout << "green and  fox are anagram? " << isAnagram("green", "fox") << std::endl;
    return 0;
}

bool isAnagram (string firstStr, string secondStr)
{
    int lengthOfWords = firstStr.length();
    bool result = true;
    if (firstStr.length() != secondStr.length()) {
        result = false;
    }else {

        int i=0;
        while (i < firstStr.length() && result) {
            if (firstStr[i] != secondStr[lengthOfWords - (i +1)]) {
                result = false;
            }
            i++;
        }
    }
    return result;
}