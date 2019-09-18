#include <iostream>
#include "draw.h"
#include <time.h>

bool isFirstLoop = true;
int position[100][2];
int arrayColor[100][3];

int randomColor ();
int randomNumber (int, int);

void drawStars (SDL_Renderer*, int corX, int corY, int size, int *color);


void draw(SDL_Renderer* gRenderer)
{
    if (isFirstLoop){
        for (int i = 0; i < 100; i++){
            position[i][0] = randomNumber(0, 630);
            position[i][1] = randomNumber(0, 470);
            arrayColor[i][0] = arrayColor[i][1] = arrayColor[i][2] = randomColor();
        }
    }
    for (int i = 0; i < 100; ++i) {
        drawStars(gRenderer, position[i][0], position[i][1], 10, arrayColor[i]);
    }


    isFirstLoop = false;
    SDL_Delay(10);
}


void drawStars (SDL_Renderer* render, int corX, int corY, int size, int *color)
{
    SDL_Rect rect = {corX, corY, size ,size};

    SDL_SetRenderDrawColor(render, color[0], color[1], color[2], 255);
    SDL_RenderFillRect(render, &rect);

}
// Draw the night sky:
//  - The background should be black
//  - The stars can be small squares
//  - The stars should have random positions on the canvas
//  - The stars should have random color (some shade of grey)
//
// You might have to make modifications somewhere else to create a black background ;)


int randomNumber (int nr_min, int nr_max)
{
    //initialize the random number generator with the current time
    //be sure that it is initialized only once
    static bool initialized = false;
    if (!initialized){
        initialized = true;
        srand(time(NULL));
    }
    //generate the random number
    return (rand () % (nr_max - nr_min)) + nr_min ;
}
int randomColor ()
{
    return randomNumber(0, 255);
}
