#include "draw.h"

int actualCorX = 0;
int actualCorY = 0;


void drawLine (SDL_Renderer* render, int corX, int corY);

void draw(SDL_Renderer* gRenderer)
{
/*
    for (int i = 0; i * 20 < SCREEN_WIDTH ; i++) {
        drawLine(gRenderer, i * 20, 0);
    }
    for (int i = 0; i * 20 < SCREEN_HEIGHT ; i++) {
        drawLine(gRenderer, SCREEN_WIDTH, i * 20);
    }
    for (int i = 0; i * 20 < SCREEN_WIDTH ; i++) {
        drawLine(gRenderer, (SCREEN_WIDTH - i * 20), SCREEN_HEIGHT);
    }
    for (int i = 0; i * 20 < SCREEN_HEIGHT ; i++) {
        drawLine(gRenderer, 0, (SCREEN_HEIGHT - i * 20));
    }
*/

    do {
        drawLine(gRenderer, actualCorX, actualCorY);
        if (actualCorX < SCREEN_WIDTH && actualCorY == 0) {
            actualCorX += 20;
        }else if (actualCorX == SCREEN_WIDTH && actualCorY < SCREEN_HEIGHT){
            actualCorY += 20;
        }else if (actualCorX > 0 && actualCorY == SCREEN_HEIGHT){
            actualCorX -= 20;
        }else if (actualCorX == 0 && actualCorY > 0){
            actualCorY -= 20;
        }
    }while (!(actualCorX == 0 && actualCorY == 0));

    SDL_Delay(200);
}

void drawLine (SDL_Renderer* render, int corX, int corY)
{
    SDL_SetRenderDrawColor(render, 0, 0, 0, 255);
    SDL_RenderDrawLine(render, corX, corY, 320, 240);


}