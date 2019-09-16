#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isElementInVector (const vector<string>&, const string& str);
int indexOfElement (const vector<string>& vectorA, const string& str);

int main() {

    vector<string> vectorA = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee" };
    vector<string> vectorB = vectorA;


    if (isElementInVector(vectorA, "Durian")) {
        cout << "Durian exist in vectorA" << endl;
    } else {
        cout << "Durian does not exist in vectorA" << endl;
    }

    vectorB.erase(vectorB.begin() + 3);
    vectorA.insert(vectorA.begin() + 4, "Kiwifruit");
    if (vectorA.size() > vectorB.size() ){
        cout << "vectorA is longer" << endl;
    }else if (vectorA.size() <  vectorB.size()){
        cout << "vectorA is shorter" << endl;
    }else  {
        cout << "vectorA is same long as vectorB" << endl ;
    }
    cout << "index of Avocado from vectorA: " << indexOfElement(vectorA, "Avocado")<<endl ;

    string array[] = {"Passion Fruit", "Pomelo"};
    vectorB.insert(vectorB.end(), array, array + 2);
    cout << "Third element of listA: " << vectorA.at(2) << endl;

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

int indexOfElement (const vector<string>& vectorA, const string& str) {
    int result = 0;
    unsigned int sizeOfA = vectorA.size();
    for (int i = 0; i < sizeOfA; i++) {
        if (vectorA.at(i) == str) {
            result = i;
        }
    }
    return result;

}