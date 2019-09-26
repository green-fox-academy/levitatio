#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H


#include <string>

class Sharpie {
private:
    std::string _color;
    float _width;
    int _inkAmount;

public:
    Sharpie(const std::string &color, float width);
    void use ();
    bool isUsable ();
};


#endif //SHARPIE_SHARPIE_H
