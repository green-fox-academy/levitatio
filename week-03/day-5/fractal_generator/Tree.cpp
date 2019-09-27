#include "Tree.h"
#include <math.h>


Tree::Tree(SDL_Renderer* renderer) : _renderer(renderer), _angle(0.445f), _ratioOfStraight(0.9f), _ratioOfSides(0.8f) {} //angle in radian

void Tree::drawTree(int xStart, int yStart, int depth, float size) {
    _maxDepth = depth;

    SDL_SetRenderDrawColor(_renderer, 0xE3, 0xC5, 0x12, 0xFF);
    int xEnd = xStart;
    int yEnd = yStart - size;
    SDL_RenderDrawLine(_renderer, xStart, yStart, xEnd, yEnd);
    drawBranch(xEnd, yEnd, 0, size, PI / 2);

}
void Tree::drawBranch (int xStart, int yStart, int depth, float actualSize, float actualAngle){
    if (depth < _maxDepth) {
        //straight branch
        int xEndOfStraightSide = xStart + _ratioOfStraight * actualSize * cosf(actualAngle);      //depth should start with 0
        int yEndOfStraightSide = yStart - _ratioOfStraight * actualSize * sinf(actualAngle);
        SDL_RenderDrawLine(_renderer, xStart, yStart, xEndOfStraightSide, yEndOfStraightSide);

        //left side branch
        int xEndOfLeftSide = xStart + _ratioOfSides * actualSize * cosf(actualAngle + _angle);      //depth should start with 0
        int yEndOfLeftSide = yStart - _ratioOfSides * actualSize * sinf(actualAngle + _angle);
        SDL_RenderDrawLine(_renderer, xStart, yStart, xEndOfLeftSide, yEndOfLeftSide);

        //right side branch
        int xEndOfRightSide = xStart + _ratioOfSides * actualSize * cosf(actualAngle - _angle);      //depth should start with 0
        int yEndOfRightSide = yStart - _ratioOfSides * actualSize * sinf(actualAngle - _angle);
        SDL_RenderDrawLine(_renderer, xStart, yStart, xEndOfRightSide, yEndOfRightSide);

        //draw next straight branch
        drawBranch(xEndOfStraightSide, yEndOfStraightSide, depth + 1, _ratioOfStraight * actualSize, actualAngle);
        //draw next left branch
        drawBranch(xEndOfLeftSide, yEndOfLeftSide, depth + 1, _ratioOfSides * actualSize, actualAngle + _angle);
        //draw next right branch
        drawBranch(xEndOfRightSide, yEndOfRightSide, depth + 1, _ratioOfSides * actualSize, actualAngle - _angle);
    }

}
