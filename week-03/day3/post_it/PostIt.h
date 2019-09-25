#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H
#include <string>

class PostIt {
    std::string _backgroundColor;
    std::string _textColor;
    std::string _text;

public:
    PostIt(const std::string&, const std::string&, const std::string&);
    std::string getBackgroundColor ();
    std::string getTextColor ();
    std::string getText ();

    void setBackgroundColor(const std::string&);
    void setTextColor(const std::string&);
    void setText(const std::string&);

};


#endif //POST_IT_POSTIT_H
