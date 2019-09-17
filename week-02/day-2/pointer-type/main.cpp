#include <iostream>

using namespace std;

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    string name = "Bob";

    int *ptrToA = &a;
    double *ptrToB = &b;
    string *ptrToName = &name;

    cout << "Address of a: " << ptrToA << " Value of a: " << a << endl;
    cout << "Address of b: " << ptrToB << " Value of b: " << b << endl;
    cout << "Address of name: " << ptrToName << " Value of name: " << name << endl;

    return 0;
}