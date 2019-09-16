#include <iostream>
#include <vector>

using namespace std;
bool isElementInVector (const vector<string>& vectorA, const string& str);
int main() {

    vector<string> shoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};

    if (isElementInVector(shoppingList, "milk")) {
        cout << "We have milk on the list " << endl;
    } else {
        cout << "We do not have milk on the list " << endl;
    }
    if (isElementInVector(shoppingList, "bananas")) {
        cout << "We have bananas on the list " << endl;
    } else {
        cout << "We do not have bananas on the list " << endl;
    }

    return 0;
}

bool isElementInVector (const vector<string>& vectorA, const string& str) {
    bool result = false;
    unsigned int sizeOfA = vectorA.size();
    for (int i = 0; i < sizeOfA; i++) {
        if (vectorA.at(i) == str) {
            result = true;
        }
    }
    return result;
}