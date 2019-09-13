
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int sizeOfMatrix;
    cout << "Size of matrix:";
    cin >> sizeOfMatrix;

    int matrix[sizeOfMatrix][sizeOfMatrix];

    for (int i = 0; i < sizeOfMatrix; ++i) {
        for (int j = 0; j < sizeOfMatrix; ++j) {
            if (i == j) {
                matrix[i][j] = 1;
            }else {
                matrix[i][j] = 0;
            }

        }
    }
    for (int i = 0; i < sizeOfMatrix; ++i) {
        for (int j = 0; j < sizeOfMatrix; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}