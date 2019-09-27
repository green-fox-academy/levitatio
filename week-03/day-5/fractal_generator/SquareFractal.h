#ifndef FRACTAL_GENERATOR_SQUAREFRACTAL_H
#define FRACTAL_GENERATOR_SQUAREFRACTAL_H

#include <SDL.h>

class SDL_Renderer;

class SquareFractal {
public:
    SquareFractal (SDL_Renderer*);
    void drawSquares (int xStart = 0, int yStart = 0, int depth = 0, int size = 0);
    void drawFrames (int xStart = 0, int yStart = 0, int size = 0);
private:

    SDL_Renderer *_renderer;
};


#endif //FRACTAL_GENERATOR_SQUAREFRACTAL_H
