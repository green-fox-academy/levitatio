#include "draw.h"

void drawToTheCenter (SDL_Renderer* renderer, int corX, int corY);

void draw(SDL_Renderer* gRenderer) {

    for (int i = 0; i < 3; i++) {
        drawToTheCenter(gRenderer, i * 100, i * 200);
    }

    SDL_Delay(20);
}

void drawToTheCenter (SDL_Renderer* renderer, int corX, int corY)
{
    SDL_SetRenderDrawColor(renderer, corX, 0, corX, 255);
    SDL_RenderDrawLine(renderer, corX, corY, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
}
// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Draw at least 3 lines with that function using a loop.