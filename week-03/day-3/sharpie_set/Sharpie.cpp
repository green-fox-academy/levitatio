#include "Sharpie.h"

Sharpie::Sharpie(const std::string &color, float width) : _color(color), _width(width), _inkAmount(3){}

void Sharpie::use() {
    _inkAmount -= 1;
}

bool Sharpie::isUsable() {
    if (_inkAmount > 0) {
        return true;
    }
    return false;
}