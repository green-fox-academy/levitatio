#include <iostream>

using namespace std;

void divideTen (double number);

int main() {
    try {
        divideTen(5);
        divideTen(-5);
        divideTen(0);
        divideTen(0.3);

    }catch (string &e){
        cout << e << endl;
    }
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0.
    // Solve the excercise using exceptions!
    // Hint: The try-catch block should be in main().

    return 0;
}

void divideTen (double number)
{
    if (number == 0) {
        throw string("fail");
    }

    cout << "Ten is divided by " << number << " : " << 10/number << endl;
}