#include "draw.h"

int density = 20;
int stepSizeX = int(SCREEN_WIDTH / density);
int stepSizeY = int(SCREEN_HEIGHT / density);


void draw(SDL_Renderer* gRenderer) {

    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    for (int i = 0; i  < density; i++){
        SDL_RenderDrawLine(gRenderer, i * stepSizeX, SCREEN_HEIGHT, 0, i * stepSizeY );
    }

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
    for (int i = 0; i  < density; i++){
        SDL_RenderDrawLine(gRenderer, i * stepSizeX, 0, SCREEN_WIDTH, i * stepSizeY );
    }
    SDL_Delay(20);
}

