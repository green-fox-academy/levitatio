#include "draw.h"

int DENSITY = 20;

int DIVIDE_NUMBER = 16;
int numberBlockInRow = DIVIDE_NUMBER / 2;
int numberBlockInColumn = DIVIDE_NUMBER / 2;

int blockWidth = SCREEN_WIDTH / (DIVIDE_NUMBER / 2);
int blockHeight = SCREEN_HEIGHT / (DIVIDE_NUMBER / 2);
int stepSizeX = int(blockWidth / DENSITY);
int stepSizeY = int(blockHeight / DENSITY);

void drawBlock (SDL_Renderer* render, int startCordX, int startCordY);
void drawBluePart (SDL_Renderer* render, int startCordX, int startCordY);
void drawGreenPart (SDL_Renderer* render, int startCordX, int startCordY);

void draw(SDL_Renderer* gRenderer) {

    for (int i = 0; i < numberBlockInRow ; ++i) {
        for (int j = 0; j < numberBlockInColumn; ++j) {
            drawBlock(gRenderer, i * blockWidth, j * blockHeight);
        }
    }
    SDL_Delay(20);
}

void drawBlock (SDL_Renderer* render, int startCordX, int starCordY)
{
    drawBluePart(render ,startCordX, starCordY);
    drawGreenPart(render, startCordX, starCordY);
}

void drawGreenPart (SDL_Renderer* render, int startCordX, int startCordY)
{
    SDL_SetRenderDrawColor(render, 0, 255, 0, 255);
    for (int i = 0; i  < DENSITY; i++){
        SDL_RenderDrawLine(render, startCordX + (i * stepSizeX), startCordY + blockHeight, startCordX, startCordY + (i * stepSizeY));
    }
}

void drawBluePart (SDL_Renderer* render, int startCordX, int startCordY)
{
    SDL_SetRenderDrawColor(render, 0, 0, 255, 255);
    for (int i = 0; i  < DENSITY; i++){
        SDL_RenderDrawLine(render, startCordX + (i * stepSizeX), startCordY, startCordX + blockWidth, startCordY + (i * stepSizeY));
    }
}