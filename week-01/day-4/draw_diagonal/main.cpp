#include <iostream>

int main() {

    int numberOfLines;
    std::cout << "Number of Lines:";
    std::cin >> numberOfLines;

    for (int i = 0; i < numberOfLines; i++) {
        if (i == 0 || i == (numberOfLines - 1)) {
            for (int n = 0; n < numberOfLines; n++) {
                std::cout << "%";
            }
        }else {
            for (int j = 0; j < numberOfLines; j++) {
                if (j == 0 ||  j == (numberOfLines - 1) || j == i ) {
                    std::cout << "%";
                }else {
                    std::cout <<  "\x20";
                }
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}