#ifndef BLOG_BLOG_H
#define BLOG_BLOG_H

#include <vector>
#include "BlogPost.h"

class Blog {
public:
    Blog();
    void add (BlogPost);
    void del (int );
    void update (int, BlogPost);
private:
    std::vector<BlogPost> _blogPost;
};

#endif //BLOG_BLOG_H
