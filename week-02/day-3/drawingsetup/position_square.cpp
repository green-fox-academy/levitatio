#include <iostream>
#include "draw.h"
#include <time.h>

int randomColor ();
int randomNumber (int, int);
void drawSquare (SDL_Renderer*, SDL_Rect *rect, int x, int y);

void draw(SDL_Renderer* gRenderer)
{
    SDL_Rect rect[3];
    for (int i = 0; i < 3; ++i) {
        drawSquare(gRenderer, (rect + i), i * 50, (i + 1) * 50);
    }
    // create a function that draws one square and takes 2 parameters:
    // the x and y coordinates of the square's top left corner
    // and draws a 50x50 square from that point.
    // draw at least 3 squares with that function.
    // avoid code duplication.
    SDL_Delay(20);
}


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

void drawSquare (SDL_Renderer* renderer, SDL_Rect *rect, int corX, int corY)
{
    rect->x = corX;
    rect->y = corY;
    rect->h = 50;
    rect->w = 50;
    SDL_SetRenderDrawColor(renderer, randomColor(), randomColor(), randomColor(), 255);
    SDL_RenderFillRect(renderer, rect);
}
