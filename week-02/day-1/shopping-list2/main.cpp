#include <iostream>
#include <map>

using namespace std;

void initiateProductsMap (map<string, double>&);
void initiateListBob (map<string, int>&);
void initiateListAlice (map<string, int>&);
double sumPriceOfBuying (const map<string, double>&, const map<string, int>&);
int sumPieceOfBuying(const map<string, int>&);

int main() {
    map<string, double> products;
    map<string, int> listBob;
    map<string, int> listAlice;

    initiateProductsMap(products);
    initiateListBob(listBob);
    initiateListAlice(listAlice);

    cout << "Bob pays " << sumPriceOfBuying(products, listBob) << endl;
    cout << "Alice pays " << sumPriceOfBuying(products, listAlice) << endl;

    if (listAlice["Rice"] > listBob["Rice"]) {
        cout << "Alice buys more Rice" <<endl;
    } else if (listAlice["Rice"] < listBob["Rice"]) {
        cout << "Bob buys more Rice" << endl;
    } else {
        cout << "They buy the same amount" << endl;
    }
    if (listAlice["Potato"] > listBob["Potato"]) {
        cout << "Alice buys more Potato" <<endl;
    } else if (listAlice["Potato"] < listBob["Potato"]) {
        cout << "Bob buys more Potato" << endl;
    } else {
        cout << "They buy the same amount" << endl;
    }

    if (listAlice.size() > listBob.size()) {
        cout << "Alice buys more different products" <<endl;
    } else if (listAlice.size() < listBob.size()) {
        cout << "Bob buys more different products" << endl;
    } else {
        cout << "They buy the same different products" << endl;
    }

    if (sumPieceOfBuying(listAlice) > sumPieceOfBuying(listBob)) {
        cout << "Alice buys more  products" <<endl;
    } else if (sumPieceOfBuying(listAlice) < sumPieceOfBuying(listBob)) {
        cout << "Bob buys more  products" <<endl;
    }else {
        cout << "They buy same amount products" <<endl;
    }

    return 0;
}

void initiateProductsMap (map<string, double>& products)
{
    products["Milk"] = 1.07;
    products["Rice"] = 1.59;
    products["Eggs"] = 3.14;
    products["Cheese"] = 12.60;
    products["Chicken Breasts"] = 9.40;
    products["Apples"] = 2.31;
    products["Tomato"] = 2.58;
    products["Potato"] = 1.75;
    products["Onion"] = 1.10;
}
void initiateListBob (map<string, int>& list)
{
    list["Milk"] = 3;
    list["Rice"] = 2;
    list["Eggs"] = 2;
    list["Cheese"] = 1;
    list["Chicken Breasts"] = 4;
    list["Apples"] = 1;
    list["Tomato"] = 2;
    list["Potato"] = 1;
}
void initiateListAlice (map<string, int>& list)
{
    list["Rice"] = 1;
    list["Eggs"] = 5;
    list["Chicken Breasts"] = 2;
    list["Apples"] = 1;
    list["Tomato"] = 10;
}
double sumPriceOfBuying (const map<string, double>& products,const map<string, int>& list)
{
     double result = 0;
     string tempStr;
     for (pair<string, int> tempPair : list) {
         if (products.count(tempPair.first)) {
             //result += double(products[tempPair.first] * tempPair.second);
             result += double(products.at(tempPair.first) * tempPair.second);
         }
     }
     return result;
}
int sumPieceOfBuying(const map<string, int>& list)
{
    int result = 0;
    for (pair<string, int> tempPair : list) {
        result += tempPair.second;
    }
    return result;
}