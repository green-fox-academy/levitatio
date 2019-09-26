#include "Blog.h"

Blog::Blog() {}

void Blog::add(BlogPost blogPost) {
    _blogPost.push_back(blogPost);
}

void Blog::del(int index) {
    _blogPost.erase(_blogPost.begin() + index);
}

void Blog::update(int index, BlogPost blogPost) {
    _blogPost.at(index) = blogPost;
}