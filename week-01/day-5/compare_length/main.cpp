#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print "p2 is longer" if `p2` has more elements than `p1`

    int p1[] = {1, 2, 3};
    int lengthOf_p1 = sizeof(p1)/ sizeof(p1[0]);
    int p2[] = {4, 5};
    int lengthOf_p2 = sizeof(p2)/ sizeof(p2[0]);
    if (lengthOf_p1 < lengthOf_p2) {
        std::cout << "p2 is longer" ;
    }


    return 0;
}