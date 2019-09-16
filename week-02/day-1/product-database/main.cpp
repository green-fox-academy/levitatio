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

    pair<string, int> maxPair = *products.begin();
    for (pair<string, int> tempPair : products){
        if (tempPair.second > maxPair.second) {
            maxPair = tempPair;
        }
    }
    cout << "Most expensive product is " << maxPair.first << endl;

    double sum = 0;
    for (pair<string, int> tempPair : products){
        sum += tempPair.second;
    }
    cout << "Average price is " << sum/products.size() << endl;

    int counter = 0;
    for (pair<string, int> tempPair : products) {
        if (tempPair.second < 300) {
            counter++;
        }
    }
    cout << "There are " << counter << " products below 300" << endl;

    bool isBelow125 = false;
    for (pair<string, int> tempPair : products) {
        if (tempPair.second < 125) {
            isBelow125 = true;
        }
    }
    pair<string, int> minPair = *products.begin();
    for (pair<string, int> tempPair : products){
        if (tempPair.second < minPair.second) {
            minPair = tempPair;
        }
    }
    cout << "The cheapest product is " << minPair.first << endl;


    return 0;
}