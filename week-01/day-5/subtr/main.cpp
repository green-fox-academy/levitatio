#include<iostream>
#include<vector>

using namespace std;
//  Create a function that takes two strings as a parameter
//  Returns the starting index where the second one is starting in the first one
//  Returns `-1` if the second string is not in the first one
int substr(string str, string keyword);

int main() {
    // Example

    // Should print: '17'
    cout << substr("this is what I'm searching in", "searching") << endl;

    // Should print: '-1'
    cout << substr("this is what I'm searching in", "not") << endl;
}

int substr(string str, string keyword) {
        int index= int(str.find(keyword));

        return index;
}


/*
int substr(char str[], char keyword[]);

int main(int argc, char args[]) {
    // Example

    // Should print: '17'
    std::cout << substr("this is what I'm searching in", "searching") << std::endl;

    // Should print: '-1'
    std::cout << substr("this is what I'm searching in", "not") << std::endl;
}

int substr(char str[], char keyword[]) {
    int index = -1;
    int lengthOfStr = sizeof(str)/ sizeof(char);
    int lengthOfKeyword = sizeof(keyword)/ sizeof(char);

    for (int k = 0; k <lengthOfStr; k++) {
        if (str[k] == keyword[0]) {
            int tempIndex = 0;
            while (str[tempIndex + k] == keyword[tempIndex] && tempIndex < lengthOfKeyword && tempIndex + k < lengthOfStr) {
                tempIndex++;
            }
            if (tempIndex == sizeof(keyword)) {
                index = k;
            }
        }
    }

    return index;
}
*/