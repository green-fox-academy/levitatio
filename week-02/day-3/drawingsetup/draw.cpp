#include <iostream>
#include "draw.h"
#include <time.h>

int randomColor ();
int randomNumber (int, int);

void draw(SDL_Renderer* gRenderer)
{

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

