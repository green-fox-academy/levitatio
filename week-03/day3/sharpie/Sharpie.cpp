#include "Sharpie.h"

Sharpie::Sharpie(const std::string &color, float width) : _color(color), _width(width), _inkAmount(100){}

void Sharpie::use() {
    _inkAmount--;
}