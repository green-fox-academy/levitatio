#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> myMap = {};
    myMap["978-1-60309-452-8"] = "A Letter to Jo";
    myMap["978-1-60309-459-7"] = "Lupus";
    myMap["978-1-60309-444-3"] = "Red Panda and Moon Bear";
    myMap["978-1-60309-461-0"] = "The Lab";

    for (map<string, string>::iterator it= myMap.begin(); it != myMap.end(); it++){
        cout << it->second << " (ISBN: " << it->first << ")" << endl;
    }

    myMap.erase("978-1-60309-444-3");
    myMap.erase("978-1-60309-461-0");

    myMap["978-1-60309-450-4"] = "They Called Us Enemy";
    myMap["978-1-60309-453-5"] = "Why Did We Trust Him?";

    if (myMap.count("478-0-61159-424-8")){
        cout << "there is value with key 478-0-61159-424-8" << endl;
    } else {
        cout << "there is not value with key 478-0-61159-424-8" << endl;
    }

    cout << myMap["978-1-60309-453-5"] << endl;
    return 0;
}