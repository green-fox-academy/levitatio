#include "draw.h"

/** Coordinates of 4 corners**/
int cor1X = SCREEN_WIDTH / 2 - 40 , cor1Y = SCREEN_HEIGHT / 2 - 60;
int cor2X = SCREEN_WIDTH / 2 + 40 , cor2Y = SCREEN_HEIGHT / 2 - 60;
int cor3X = SCREEN_WIDTH / 2 + 40 , cor3Y = SCREEN_HEIGHT / 2 + 60;
int cor4X = SCREEN_WIDTH / 2 - 40 , cor4Y = SCREEN_HEIGHT / 2 + 60;


void draw(SDL_Renderer* gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, cor1X, cor1Y, cor2X, cor2Y);

    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_RenderDrawLine(gRenderer, cor2X, cor2Y, cor3X, cor3Y);

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
    SDL_RenderDrawLine(gRenderer, cor3X, cor3Y, cor4X, cor4Y);

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, cor4X, cor4Y, cor1X, cor1Y);
    // Draw a box that has different colored lines on each edge.
    // The center of the box should align with the center of the screen.
    SDL_Delay(20);
}