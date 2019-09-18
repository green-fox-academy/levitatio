#include "draw.h"

void drawRect (SDL_Renderer*, int corX, int corY);
int counter = 0;


void draw(SDL_Renderer* gRenderer)
{

    for (int i = 0; i < 16; ++i) {
        for (int j = 0; j < 12 ; ++j) {
            drawRect(gRenderer, i * 80, j * 80);
        }
        counter++;
    }



    SDL_Delay(50);
}


void drawRect (SDL_Renderer* render, int corX, int corY)
{

    SDL_Rect rect = {corX, corY, 80 ,80};
    if (counter % 2) {
        SDL_SetRenderDrawColor(render, 0, 0, 0, 255);
    }else {
        SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
    }

    SDL_RenderFillRect(render, &rect);
    counter++;
}