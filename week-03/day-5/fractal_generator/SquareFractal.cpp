#include "SquareFractal.h"

SquareFractal::SquareFractal(SDL_Renderer *renderer) : _renderer(renderer){}

void SquareFractal::drawSquares(int xStart, int yStart, int depth, int size) {



    int thirdOfActualSize = size / 3 ;
    int xEnd = xStart + 3 * thirdOfActualSize;
    int yEnd = yStart + 3 * thirdOfActualSize;

    SDL_SetRenderDrawColor(_renderer,0x00,0x00,0x00,0xFF);
    SDL_RenderDrawLine(_renderer, xStart, yStart + thirdOfActualSize, xEnd, yStart + thirdOfActualSize);
    SDL_RenderDrawLine(_renderer, xStart, yStart + 2 * thirdOfActualSize, xEnd, yStart + 2 * thirdOfActualSize);
    SDL_RenderDrawLine(_renderer, xStart + thirdOfActualSize, yStart, xStart + thirdOfActualSize, yEnd);
    SDL_RenderDrawLine(_renderer, xStart + 2 * thirdOfActualSize, yStart,xStart + 2 * thirdOfActualSize, yEnd);

    depth--;

    if (depth > 0) {
        drawSquares(xStart + thirdOfActualSize, yStart, depth, thirdOfActualSize);
        drawSquares(xStart + 2 * thirdOfActualSize, yStart + thirdOfActualSize, depth, thirdOfActualSize);
        drawSquares(xStart + thirdOfActualSize, yStart + 2 * thirdOfActualSize, depth, thirdOfActualSize);
        drawSquares(xStart, yStart + thirdOfActualSize, depth, thirdOfActualSize);
    }

    drawFrames(xStart, yStart, size);

}

void SquareFractal::drawFrames(int xStart, int yStart, int size) {
    SDL_RenderDrawLine(_renderer, xStart, yStart, xStart + size, yStart);
    SDL_RenderDrawLine(_renderer, xStart, yStart + size, xStart + size, yStart + size);
    SDL_RenderDrawLine(_renderer, xStart, yStart, xStart, yStart + size);
    SDL_RenderDrawLine(_renderer, xStart + size, yStart, xStart + size, yStart + size);
}
