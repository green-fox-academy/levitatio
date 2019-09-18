#include "draw.h"

void drawCenteredRect (SDL_Renderer*, int size, int *color);



void draw(SDL_Renderer* gRenderer)
{
    int colorCodeRGB[7][3] =  {{255, 0, 0},
                              {255, 127, 0},
                              {255, 255, 0},
                              {0, 255, 0},
                              {0, 0, 255},
                              {39, 0, 51},
                              {139, 0, 255}};

    for (int i = 0; i < 7; ++i) {
        drawCenteredRect(gRenderer, (7 - i
        ) * 50, colorCodeRGB[i]);
        // drawCenteredRect(gRenderer, (i + 1) * 50, (colorCodeRGB + i) ));         does not work
    }



    SDL_Delay(50);
}


void drawCenteredRect (SDL_Renderer* render, int size, int *color)
{
    SDL_Rect rect = {(SCREEN_WIDTH - size) / 2, (SCREEN_HEIGHT - size) / 2, size ,size};

    SDL_SetRenderDrawColor(render, color[0], color[1], color[2], 255);
    SDL_RenderFillRect(render, &rect);

}
// Create a square drawing function that takes 2 parameters:
// The square size, and the fill color,
// and draws a square of that size and color to the center of the canvas.
// Create a loop that fills the canvas with a rainbow of colored squares