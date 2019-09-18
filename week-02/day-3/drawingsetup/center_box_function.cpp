#include <iostream>
#include "draw.h"
#include <time.h>


int randomColor ();
int randomNumber (int, int);
//SDL_Rect rect[4];
void drawCenteredBox (SDL_Renderer*, int size);

void draw(SDL_Renderer* gRenderer)
{
    /*
    int randomSizes[4];
    for (int l = 0; l < 4; ++l) {
        randomSizes[l] =randomNumber(l * 50, (l + 1) * 50);
    }

    int tempSmallestIndex = 0, tempToSwap;
    for (int j = 0; j < 4; ++j) {                                    //sort temp  array into randomSize array
        for (int i = j; i < 4; ++i) {                                //smallest number to given position
            if (randomSizes[i] < randomSizes[tempSmallestIndex]) {
                tempSmallestIndex = i;
            }
        }
        tempToSwap = randomSizes[j];
        randomSizes[j] = randomSizes[tempSmallestIndex];
        randomSizes[tempSmallestIndex] = tempToSwap;

    }
    */
    for (int i = 0; i < 3; ++i) {
        drawCenteredBox(gRenderer, randomNumber(50, 200));
    }



    SDL_Delay(500);
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

void drawCenteredBox (SDL_Renderer* render, int size)
{
    SDL_Rect rect = {(SCREEN_WIDTH - size) / 2, (SCREEN_HEIGHT - size) / 2, size ,size};

    SDL_SetRenderDrawColor(render, randomColor(), randomColor(), randomColor(), 255);
    SDL_RenderDrawRect(render, &rect);

}