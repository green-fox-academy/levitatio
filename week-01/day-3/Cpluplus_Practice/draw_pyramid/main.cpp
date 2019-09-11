#include <iostream>

int main(int argc, char* args[]) {

    int numberOfLine;
    int maximumStar;
    int starsInRow;
    std::cout << "Number of line:" ;std::cin>> numberOfLine;

    maximumStar = (numberOfLine * 2) - 1;


    for (int i=1; i <= numberOfLine; i++) {
        starsInRow = (i * 2) - 1;
        for (int n=0; n < maximumStar; n++){

            if (n < ((maximumStar - starsInRow)/2) )      {        //first place of starts in i row: numberOfLine - i
                std::cout<<" ";

            }else if (n >= ((maximumStar - starsInRow)/2)
                      && n < (((maximumStar - starsInRow)/2)+starsInRow) ) {
                std::cout<<"*";

            }else {
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}