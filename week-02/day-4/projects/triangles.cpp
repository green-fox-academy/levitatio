#include "draw.h"

int sizeSideOfTriangle = 40;
int sizeHeightOfTriangle = int(1.732 * (sizeSideOfTriangle / 2));
int numberOfRows = 10;

void drawTriangle (SDL_Renderer* gRenderer, int cordX, int cordY);
void drawRow (SDL_Renderer* gRenderer, int indexOfRow, int startCorX, int startCorY);

void draw(SDL_Renderer* gRenderer)
{
    int corXFirstTriangle = SCREEN_WIDTH / 2 - sizeSideOfTriangle / 2;
    int corYFirstTriangle = sizeSideOfTriangle;
    for (int i = 0; i < numberOfRows; ++i) {
        drawRow(gRenderer, i, corXFirstTriangle - i * (sizeSideOfTriangle / 2), corYFirstTriangle + i *(sizeHeightOfTriangle - 1));
    }

}

void drawTriangle (SDL_Renderer* gRenderer, int cordXLeftCorner, int cordYLeftCorner)
{
    int cordXRightCorner = cordXLeftCorner + sizeSideOfTriangle;
    int cordYRightCorner = cordYLeftCorner;
    int cordXUpCorner = cordXLeftCorner  + sizeSideOfTriangle / 2;
    int cordYUpCorner = cordYLeftCorner - sizeHeightOfTriangle;

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, cordXLeftCorner, cordYLeftCorner, cordXRightCorner, cordYLeftCorner);
    SDL_RenderDrawLine(gRenderer, cordXRightCorner, cordYRightCorner, cordXUpCorner, cordYUpCorner);
    SDL_RenderDrawLine(gRenderer, cordXUpCorner, cordYUpCorner, cordXLeftCorner, cordYLeftCorner);
}

void drawRow (SDL_Renderer* gRenderer, int indexOfRow, int startCorX, int startCorY)
{
    for (int i = 0; i < indexOfRow; ++i) {

        drawTriangle(gRenderer, startCorX + i * sizeSideOfTriangle, startCorY);
    }

}