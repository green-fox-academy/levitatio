#include "draw.h"

int halfDensity = 20;
int stepSizeX = int(SCREEN_WIDTH / (2 * halfDensity));
int stepSizeY = int(SCREEN_HEIGHT / (2 * halfDensity));

void draw(SDL_Renderer* gRenderer) {

    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    for (int i = 0; i  < halfDensity; i++){                     //first half
        SDL_RenderDrawLine(gRenderer, i * stepSizeX, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, (SCREEN_HEIGHT / 2) - (i * stepSizeY)); // to up lines
        SDL_RenderDrawLine(gRenderer, i * stepSizeX, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, (SCREEN_HEIGHT / 2) + (i * stepSizeY)); // to down lines
    }

    SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2 , SCREEN_HEIGHT / 2, SCREEN_WIDTH,  SCREEN_HEIGHT / 2); // to up lines

    for (int i = 0; i  < halfDensity; i++){                     //second half
        SDL_RenderDrawLine(gRenderer, (SCREEN_WIDTH / 2 ) + i  * stepSizeX, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2,  (i * stepSizeY)); // to up lines
        SDL_RenderDrawLine(gRenderer, (SCREEN_WIDTH / 2 ) + i * stepSizeX, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, SCREEN_HEIGHT - (i * stepSizeY)); // to down lines
    }
    SDL_Delay(20);
}

