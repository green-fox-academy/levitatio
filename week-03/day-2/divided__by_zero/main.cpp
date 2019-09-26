#include <iostream>

using namespace std;

void divideTen (double number);

int main()
{
    divideTen(5);
    divideTen(-5);
    divideTen(0);
    divideTen(0.3);
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0.
    // Solve the excercise without using exceptions!

    return 0;
}

void divideTen (double number)
{
    if (number == 0) {
        cout << "fail" << endl;
    } else {
        cout << "Ten is divided by " << number << " :" << 10/number << endl;
    }

}