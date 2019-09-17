#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int *ptrToA = &a, *ptrToB = &b;

    std:: cout << *ptrToA + *ptrToB ;

    return 0;
}