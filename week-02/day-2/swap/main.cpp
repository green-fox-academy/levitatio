#include <iostream>

void swap (int **first, int **second){
    int *temp = *first;
    *first = *second;
    *second = temp;
}

int main ()
{
    // Create a function which swaps the values of 'a' and 'b' variables.
    // This time use a void function and pointers.

    int a = 10;
    int b = 316;
    int *ptrToA = &a, *ptrToB = &b;
    swap (&ptrToA, &ptrToB);
    std::cout << "a: " << *ptrToA << ", b: " << *ptrToB;

    return 0;
}