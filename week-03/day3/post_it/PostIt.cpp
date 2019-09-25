#include "PostIt.h"

PostIt::PostIt(const std::string &bColor, const std::string &tcolor, const std::string &str) {
    backgroundColor = bColor;
    textColor = tcolor;
    text = str;
}


std::string PostIt::getBackgroundColor() {
    return backgroundColor;
}
std::string PostIt::getTextColor() {
    return textColor;
}
std::string PostIt::getText() {
    return text;
}
void PostIt::setBackgroundColor(const std::string &str) {
    backgroundColor = str;
}
void PostIt::setTextColor(const std::string &str) {
    textColor = str;
}
void PostIt::setText(const std::string &str) {
    text = str;
}