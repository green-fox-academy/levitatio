#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* args[]) {

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    string animals[4] = {"koal", "pand", "zebr"};
    animals[3] = "a";
    cout << animals[3];
    return 0;
}