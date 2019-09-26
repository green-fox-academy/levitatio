#include "BlogPost.h"

#include "BlogPost.h"

BlogPost::BlogPost(const std::string &authorName, const std::string &title, const std::string &text,
                   const std::string publicationDate) {
    _authorName = authorName;
    _title = title;
    _text = text;
    _publicationDate = publicationDate;
}
