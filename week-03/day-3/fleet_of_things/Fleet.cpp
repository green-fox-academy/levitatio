#include "fleet.h"

Fleet::Fleet() {}

void Fleet::add(const Thing& thing)
{
    _things.push_back(thing);
}

std::string Fleet::toString()
{
    std::string result = "";
    for(int i = 0; i < _things.size(); i++) {
        result += std::to_string(i+1) + ". " + _things.at(i).toString() + "\n";
    }
    return result;
}