#include "draw.h"

bool firstHex = true;
int sizeSideOfHexagon = 20;
int sizeHeightOfHexagon = int(1.732 * sizeSideOfHexagon);
int numberOfCircles = 100;
int cordOfCorners[6][2] = {{0,0},
                           {0 + sizeSideOfHexagon, 0},
                           {int(1.5 * sizeSideOfHexagon), int (sizeHeightOfHexagon /2)},
                           {sizeSideOfHexagon, sizeHeightOfHexagon},
                           {0, sizeHeightOfHexagon},
                           {-(sizeSideOfHexagon/2), int (sizeHeightOfHexagon /2)}};

void drawHexagon (SDL_Renderer* gRenderer, int cordX, int cordY);
void drawDiagonal (SDL_Renderer* gRenderer, int indexOfRow, int &startCorX, int &startCorY, int direction);
void drawCircle (SDL_Renderer* gRenderer, int indexOfCircle, int startCorX, int startCorY);

void draw(SDL_Renderer* gRenderer)
{
    int corXFirstHexagon = SCREEN_WIDTH / 2 - sizeSideOfHexagon / 2;
    int corYFirstHexagon = SCREEN_HEIGHT /2 - sizeHeightOfHexagon / 2;
    for (int i = 0; i < numberOfCircles; ++i) {
        drawCircle(gRenderer, i, corXFirstHexagon, corYFirstHexagon - i * sizeHeightOfHexagon);
    }

}

void drawCircle (SDL_Renderer* gRenderer, int indexOfCircle, int startCorX, int startCorY)
{
    int tempStartCorX = startCorX;
    int tempStartCorY = startCorY;
    if (indexOfCircle == 0) {
        drawHexagon(gRenderer, startCorX, startCorY);

    }else {
        for(int i = 0; i < 6; i++){
                drawDiagonal(gRenderer, indexOfCircle, tempStartCorX, tempStartCorY, i);
            }
        }
}

void drawDiagonal (SDL_Renderer* gRenderer, int indexOfCircle, int &startCorX, int &startCorY, int codeDirection)
{
    for (int i = 0; i < indexOfCircle; ++i) {

        drawHexagon(gRenderer, startCorX, startCorY);
        if (i == indexOfCircle -1 && codeDirection != 5){
            codeDirection++;
            firstHex = false;
        }
        switch (codeDirection){
            case 0: {startCorX += cordOfCorners[2][0]; startCorY +=cordOfCorners[2][1];} break;
            case 1: {startCorX += cordOfCorners[4][0]; startCorY +=cordOfCorners[4][1];} break;
            case 2: {startCorX += cordOfCorners[5][0] - sizeSideOfHexagon; startCorY +=cordOfCorners[5][1];} break;
            case 3: {startCorX -= cordOfCorners[2][0]; startCorY -=cordOfCorners[2][1];} break;
            case 4: {startCorX -= cordOfCorners[4][0]; startCorY -=cordOfCorners[4][1];} break;
            case 5: {startCorX += (cordOfCorners[1][0] - cordOfCorners[5][0]); startCorY += (cordOfCorners[1][1] - cordOfCorners[5][1]);} break;
        }

    }
    //direction
}

void drawHexagon (SDL_Renderer* gRenderer, int startCordX, int startCordY) {
    // Number of Corners start 0. at LeftUpCorner and goes with clockwise direction to 5.

    int startLineX, startLineY, endLineX, endLineY;

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);

    for (int i = 0; i < 5; i++) {
        startLineX = startCordX + cordOfCorners[i][0];
        startLineY = startCordY + cordOfCorners[i][1];
        endLineX = startCordX + cordOfCorners[i + 1][0];
        endLineY = startCordY + cordOfCorners[i + 1][1];
        SDL_RenderDrawLine(gRenderer, startLineX, startLineY, endLineX, endLineY);
    }
    startLineX = startCordX + cordOfCorners[5][0];
    startLineY = startCordY + cordOfCorners[5][1];
    endLineX = startCordX + cordOfCorners[0][0];
    endLineY = startCordY + cordOfCorners[0][1];
    SDL_RenderDrawLine(gRenderer, startLineX, startLineY, endLineX, endLineY);
}
