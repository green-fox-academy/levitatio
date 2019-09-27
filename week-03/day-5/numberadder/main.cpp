#include <iostream>

int numberAdder (int n);

int main() {
    int n = 200;
    std::cout << "Sum of first " << n << " whole number: " << numberAdder(n) << std::endl;
    return 0;
}

int numberAdder (int n)
{
    if (n > 0) {
        return n + numberAdder (n - 1);
    }
    return n;
}