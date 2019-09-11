#include <iostream>

int main(int argc, char* args[]) {

    double a, b, c;

    std::cout << " First side: "; std::cin>>a;
    std::cout << "Second side: "; std::cin>>b;
    std::cout << "Third side: "; std::cin>>c;

    std::cout <<"Surface Area of Cuboid: "<< ((a*b) + (a*c) + (b*c))*2<<std::endl;
    std::cout <<"Voulme of Cuboid: "<< a*b*c;


    return 0;
}