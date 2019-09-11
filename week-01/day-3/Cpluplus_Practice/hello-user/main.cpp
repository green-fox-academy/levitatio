#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    std::string name;

    std::cout<< "Please type your name! \n" ;
    std::cin >> name;

    std::cout << "\n Hello " << name << "!" <<std::endl;
    return 0;
}