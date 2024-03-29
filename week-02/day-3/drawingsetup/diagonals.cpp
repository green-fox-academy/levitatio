#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_RenderDrawLine(gRenderer, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH, 0, 0, SCREEN_HEIGHT);

    SDL_Delay(20);
}
// Draw the canvas' diagonals.
// If it starts from the upper-left corner it should be green, otherwise it should be red.
