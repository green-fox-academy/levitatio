#include <iostream>

int main(int argc, char* args[]) {

    int numberOfLine;
    int halfNumberOfLine;
    int maximumStar;
    int starsInRow;
    std::cout << "Number of line:" ;std::cin>>numberOfLine;

    halfNumberOfLine = int(numberOfLine/2 + 1);

    maximumStar = (halfNumberOfLine * 2) - 1;


    for (int i=1; i <= halfNumberOfLine; i++) {
        starsInRow = (i * 2) - 1;
        for (int n=0; n < maximumStar; n++){

            if (n < ((maximumStar - starsInRow)/2) )      {        //first place of starts in i row: halfNumberOfLine - i
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
    for (int i=halfNumberOfLine-1; i > 0 ; i--) {
        starsInRow = (i * 2) - 1;
        for (int n=0; n < maximumStar; n++){

            if (n < ((maximumStar - starsInRow)/2) )      {        //first place of starts in i row: halfNumberOfLine - i
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