#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> names;
    cout << names.size() << endl;

    names.push_back("Villiams");
    cout << "Is names vector empty? "<< names.empty() << endl;

    names.push_back("John");
    names.push_back("Amanda");

    cout << "size of names vector: " << names.size() << endl;
    cout << "third element: " << names.at(2) << endl;

    for (int i = 0; i <names.size() ; ++i) {
        cout << names.at(i) << endl;
    }
    names.erase(names.begin() + 1);
    for (int j = 0; j < names.size(); ++j) {
        cout << names.at(names.size() - j - 1) << endl;
    }
    names.clear();
    return 0;
}