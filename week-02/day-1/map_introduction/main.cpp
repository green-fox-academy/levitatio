#include <iostream>
#include <map>
using namespace std;

int main() {

    map <int, char> firstMap;
    map <int, char>::iterator it;

    cout << "Map is empty, or not: " << firstMap.empty();
    firstMap[97] = 'a';
    firstMap[98] = 'b';
    firstMap[99] = 'c';
    firstMap[65] = 'A';
    firstMap[66] = 'B';
    firstMap[67] = 'C';

    for (map<int, char>::iterator it = firstMap.begin(); it != firstMap.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }

    firstMap[68] = 'D';
    cout << "size of map: " << firstMap.size() << endl;
    cout << "value of key 99: " << firstMap[99] << endl;
    cout << "value of key 97: " << firstMap[97] << endl;
    cout << "Is there a key-value pair with key 97: " << firstMap.count(100) << endl;

    firstMap.clear();

    return 0;
}