#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* args[]) {

    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`
    int ai[] = {3, 4, 5, 6, 7};
    int sum = 0;
    for (int i = 0; i < 5 ; ++i) {
        sum += ai[i];
    }
    cout << sum;
    return 0;
}