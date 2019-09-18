#include "draw.h"

SDL_Rect rect = {SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2 - 50, 100, 100};

void draw(SDL_Renderer* gRenderer)
{


    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_RenderFillRect(gRenderer, &rect);
    SDL_Delay(20);
}

// Draw a green 100x100 square to the canvas' center.