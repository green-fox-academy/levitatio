#include "draw.h"

int halfWindowHeight = SCREEN_HEIGHT / 2;
int halfWindowWidth = SCREEN_WIDTH / 2;

void draw(SDL_Renderer* gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, 0, halfWindowHeight, SCREEN_WIDTH, halfWindowHeight);

    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_RenderDrawLine(gRenderer, halfWindowWidth, 0, halfWindowWidth, SCREEN_HEIGHT);
    // draw a red horizontal line to the canvas' middle.
    // draw a green vertical line to the canvas' middle.

    SDL_Delay(20);
}
