#ifndef FRACTAL_GENERATOR_TREE_H
#define FRACTAL_GENERATOR_TREE_H

#include <utility>
#include "SDL.h"
#include "draw.h"

#define PI 3.14159265

class Tree {
public:
    Tree(SDL_Renderer* renderer);
    void drawTree (int xStart = SCREEN_WIDTH / 2, int yStart = SCREEN_HEIGHT - 20, int depth = 7, float size = 60);
    void drawBranch(int xStart, int yStart, int actualDepth, float actualSize, float actualAngle);

private:
    SDL_Renderer* _renderer;
    float _angle;
    float _ratioOfStraight;
    float _ratioOfSides;
    int _maxDepth;


};


#endif //FRACTAL_GENERATOR_TREE_H
