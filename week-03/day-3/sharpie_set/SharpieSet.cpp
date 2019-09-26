#include "SharpieSet.h"


void SharpieSet::addNewSharpie(Sharpie sharpie) {
    _sharpies.push_back(sharpie);
}


int SharpieSet::countUsable() {
    int result = 0;
    for (int i = 0; i < _sharpies.size(); ++i) {
        if(_sharpies.at(i).isUsable()) {
            result++;
        }

    }
    return result;
}

void SharpieSet::removeTrash() {
    for (int i = 0; i < _sharpies.size() ; ++i) {
        if(!_sharpies.at(i).isUsable()) {
            _sharpies.erase(_sharpies.begin() + i);
            i--;
        }

    }
}

std::vector<Sharpie> SharpieSet::getSharpies (){
    return _sharpies;
}
Sharpie SharpieSet::getSharpie (int index) {
    return _sharpies.at(index);
}
void SharpieSet::useSharpie(int index) {
    if (_sharpies.at(index).isUsable())
        _sharpies.at(index).use();
}
/*
Sharpie* SharpieSet::getSharpie(int index){
    return &(_sharpies.at(index));
}
*/