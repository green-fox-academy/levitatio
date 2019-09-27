#include <iostream>
#include <vector>
#

using namespace std;

int maximumFinder (vector<int> &numbers, int index = 0);

int main() {

    vector<int> numbers = {1, 2, 4, 2, 1, 8, 100, 101};

    std::cout << "Maximum of numbers: " << maximumFinder(numbers) <<std::endl;
    return 0;
}

int maximumFinder (vector<int> &numbers, int index)
{
    int result = 0, next;
    if (index < numbers.size() -1 ){
        next = maximumFinder(numbers, ++index);
        result = numbers.at(index) > next ? numbers.at(index) : next;
        return   result;
    }

    return result;

}