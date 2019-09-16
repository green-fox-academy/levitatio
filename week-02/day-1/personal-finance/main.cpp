#include <iostream>
#include <vector>

using namespace std;
int sum (const vector<int>&);
int max (const vector<int>&);
int min (const vector<int>&);



int main() {

    vector<int> expenses = {500, 1000, 1250, 175, 800, 120};
    double average = sum(expenses) / expenses.size();
    cout << "We spent: " << sum(expenses) << endl;
    cout << "Our greatest expense: " << max(expenses) << endl;
    cout << "Our cheapest expense: " << min(expenses) << endl;
    cout << "Average: " << average << endl;

    return 0;
}

int sum (const vector<int>& vect)
{
    int result=0;
    for (int i = 0; i < vect.size(); i++) {
        result += vect.at(i);
    }
    return result;
}
int max (const vector<int>& vect)
{
    int result = vect.at(0);
    for (int i = 0; i < vect.size(); i++) {
        if (vect.at(i) > result) {
            result = vect.at(i);
        }
    }
    return result;
}

int min (const vector<int>& vect)
{
    int result = vect.at(0);
    for (int i = 0; i < vect.size(); i++) {
        if (vect.at(i) < result) {
        result = vect.at(i);
        }
    }
    return result;
}