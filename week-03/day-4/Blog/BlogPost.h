#ifndef BLOG_POST_BLOGPOST_H
#define BLOG_POST_BLOGPOST_H

#include <string>

class BlogPost {
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;

public:
    BlogPost (const std::string &authorName, const std::string &title,  const  std::string &text, const std::string publicationDate);

};


#endif //BLOG_POST_BLOGPOST_H
