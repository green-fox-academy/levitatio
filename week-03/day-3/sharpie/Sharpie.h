#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


#include <string>

class Sharpie {
    std::string _color;
    float _width;
    float _inkAmount;

public:
    Sharpie(const std::string &color, float width);
    void use ();
};


#endif //SHARPIE_SHARPIE_H
