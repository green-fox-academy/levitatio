#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> phonebook = {{"William A. Lathan", "405-709-1865"},
                                     {"John K. Miller", "402-247-8568"},
                                     {"Hortensia E. Foster", "606-481-6467"},
                                     {"Amanada D. Newland", "319-243-5613"},
                                     {"Brooke P. Askew", "307-687-2982"}
                                     };
    cout << phonebook["John K. Miller"] << endl;
    for (map<string, string>::iterator  it = phonebook.begin(); it != phonebook.end(); it++){
        if (it->second == "307-687-2982"){
            cout << "307-687-2982 number belongs to "<<it->first << endl;
        }
    }
    if (phonebook.count("Chris E. Myers")) {
        cout << "We know Chris E. Myers' phone number" << endl;
    } else {
        cout << "We do not know Chris E. Myers' phone number" << endl;
    }

    return 0;
}