#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> products;
    products["Eggs"] = 200;
    products["Milks"] = 200;
    products["Fish"] = 400;
    products["Apples"] = 150;
    products["Bread"] = 50;
    products["Chicken"] = 550;

    cout << "Fish costs " << products["Fish"] << endl;

    cout << "The following products are below 201: " << endl;
    for (pair<string, int> tempPair : products){
        if (tempPair.second < 201) {
            cout << tempPair.first << endl;
        }
    }
    cout << "The following products are above 150: " << endl;
    for (pair<string, int> tempPair : products){
        if (tempPair.second > 150) {
            cout << tempPair.first << " : " << tempPair.second << endl;
        }
    }

    return 0;
}