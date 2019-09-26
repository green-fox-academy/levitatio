#include "PostIt.h"

PostIt::PostIt(const std::string &bColor, const std::string &tcolor, const std::string &str) {
    _backgroundColor = bColor;
    _textColor = tcolor;
    _text = str;
}


std::string PostIt::getBackgroundColor() {
    return _backgroundColor;
}
std::string PostIt::getTextColor() {
    return _textColor;
}
std::string PostIt::getText() {
    return _text;
}
void PostIt::setBackgroundColor(const std::string &str) {
    _backgroundColor = str;
}
void PostIt::setTextColor(const std::string &str) {
    _textColor = str;
}
void PostIt::setText(const std::string &str) {
    _text = str;
}