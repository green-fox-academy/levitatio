#include "draw.h"

int box1[][2] = {{10, 10}, {290,  10}, {290, 290}, {10, 290}};
int box2[][2] = {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}};


void connectLine (SDL_Renderer* render, int array[][2], int size);

void draw(SDL_Renderer* gRenderer)
{
    connectLine(gRenderer, box1, (sizeof box1 / sizeof box1[0]));
    connectLine(gRenderer, box2, (sizeof box2 / sizeof box2[0]));
    SDL_Delay(200);
}

void connectLine (SDL_Renderer* render, int array[][2], int size)
{
    SDL_SetRenderDrawColor(render, 0, 0, 0, 255);

    for (int i = 0; i < size - 1; ++i) {
        SDL_RenderDrawLine(render, array[i][0], array[i][1], array[i + 1][0], array[i + 1][1]);
    }
    SDL_RenderDrawLine(render, array[0][0], array[0][1], array[size - 1][0], array[size - 1][1]);


}
// Create a function that takes 1 parameter:
// An array of {x, y} points
// and connects them with green lines.
// Connect these to get a box:
// Connect these: {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}}
