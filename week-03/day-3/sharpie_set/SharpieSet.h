#ifndef SHARPIE_SET_SHARPIESET_H
#define SHARPIE_SET_SHARPIESET_H

#include <vector>
#include "Sharpie.h"

class SharpieSet {
private:
    std::vector<Sharpie> _sharpies;

public:
    void addNewSharpie (Sharpie sharpie);
    std::vector<Sharpie> getSharpies();
    Sharpie getSharpie(int index);
    int countUsable();
    void removeTrash();
    void useSharpie(int index);

};


#endif //SHARPIE_SET_SHARPIESET_H
