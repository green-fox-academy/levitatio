#include <iostream>

int sumDigit (int n);

int main() {
    int number = 987405880;
    std::cout << "Sum of digit of " << number << " is: " << sumDigit(number) << std::endl;
    return 0;
}

int sumDigit (int n)
{
    int remainder = n % 10;
    if (n > 0) {
        return n % 10 + sumDigit( (n - remainder) / 10);
    }
    return n;
}