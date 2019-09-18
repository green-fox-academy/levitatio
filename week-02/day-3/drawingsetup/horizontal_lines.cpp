#include "draw.h"

void drawHorizontalLines (SDL_Renderer* renderer, int corX, int corY);

void draw(SDL_Renderer* gRenderer) {

    for (int i = 0; i < 3; i++) {
        drawHorizontalLines(gRenderer, i * 100, i * 200);
    }

    SDL_Delay(20);
}

void drawHorizontalLines (SDL_Renderer* renderer, int corX, int corY)
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderDrawLine(renderer, corX, corY, corX + 50, corY);
}


// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a 50 long horizontal line from that point.
// Draw at least 3 lines with that function using a loop.