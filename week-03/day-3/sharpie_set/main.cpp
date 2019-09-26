#include <iostream>
#include "SharpieSet.h"

SharpieSet initSharpieSet () {
    SharpieSet result;
    result.addNewSharpie(Sharpie("blue", 3.4));
    result.addNewSharpie(Sharpie("red", 0));
    result.addNewSharpie(Sharpie("green", 20));
    result.addNewSharpie(Sharpie("black", 34));

    return result;
}


int main() {

    SharpieSet sharpies = initSharpieSet();
    std::cout << "Usable sahrpies number: " << sharpies.countUsable() <<std::endl;

    for (int i = 0; i < 3; ++i) {
        sharpies.useSharpie(1);
        sharpies.useSharpie(2);
    }
    sharpies.removeTrash();
    std::cout << "Usable sahrpies number: " << sharpies.countUsable() <<std::endl;

    return 0;
}