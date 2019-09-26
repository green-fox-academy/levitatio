#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> collectUniqueIPAddresses (const string &fileName);
double ratioGetPost (const vector<string> &);
vector<string> collectPostGet (const string &fileName);
bool uniqueIPAddress (const vector<string> &ipAddresses, const string &newAddress);
// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

int main() {

    vector<string> uniqueIpAddresses = collectUniqueIPAddresses("..//logs.txt");

    for (int i = 0; i < uniqueIpAddresses.size(); ++i) {
        cout << uniqueIpAddresses.at(i) << endl;
    }
    cout << "Number of unique IP addresses: " << uniqueIpAddresses.size() << endl;

    cout << "ratio of Get and Post: " << ratioGetPost(collectPostGet("..//logs.txt")) << endl;

    return 0;
}

vector<string> collectUniqueIPAddresses (const string &fileName)
{
    vector<string> result;
    ifstream sourceFile;
    sourceFile.open(fileName);
    if (!sourceFile.is_open()){
        cout << "Epic fail"<<endl;
        return result;
    }
    string tempStr;

    while (getline(sourceFile, tempStr)) {
        istringstream ss(tempStr);
        string token;
        for (int i = 0; i < 9 ; ++i) {
            getline(ss, token, ' ');
            if (i == 8 && uniqueIPAddress(result, token)) {
                result.push_back(token);
            }
        }
    }
    sourceFile.close();
    return result;
}
vector<string> collectPostGet (const string &fileName)
{
    vector<string> result;

    ifstream sourceFile;
    sourceFile.open(fileName);
    if (!sourceFile.is_open()){
        cout << "Epic fail"<<endl;
        return result;
    }
    string tempStr;

    while (getline(sourceFile, tempStr)) {
        istringstream ss(tempStr);
        string token;
        for (int i = 0; i < 12 ; ++i) {
            getline(ss, token, ' ');
            if (i == 11) {
                result.push_back(token);
            }
        }
    }
    sourceFile.close();
    return result;
}

double ratioGetPost (const vector<string> &vecGetPost)
{
    double result;
    int numberGet = 0;
    int numberPost = 0;
    for (int j = 0; j < vecGetPost.size(); ++j) {
        if (vecGetPost.at(j) == "GET") {
            numberGet++;
        } else if (vecGetPost.at(j) == "POST") {
            numberPost++;
        }
    }
    result = (double)numberGet / (double)numberPost;
    return  result;

}

bool uniqueIPAddress (const vector<string> &ipAddresses, const string &newAddress)
{
        for (int i = 0; i < ipAddresses.size(); ++i) {
        if (ipAddresses.at(i) == newAddress) {
            return false;
        }
    }
    return true;
}