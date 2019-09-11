#include <iostream>

int main(int argc, char* args[]) {

    int girls, boys, people;

    std::cout << "Number of girls:";  std::cin>>girls;
    std::cout << "Number of boys:";  std::cin>>boys;

    people = girls + boys;

    if (girls <= 0) {
        std::cout<<"Sausage party! \n";
    }else {
        if (people < 20) {
            std::cout<<"Average party \n";
        }else {
            if (boys != girls ) {
                std::cout<<"Quite cool party! \n";
            } else {
                std::cout<<"The party is excellent! \n";
            }
        }
    }

    return 0;
}