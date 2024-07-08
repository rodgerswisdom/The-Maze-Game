#include <stdio.h> /*prinf and fprintf*/

#ifndef _WIN32
#include <SDL/SDL.h> /*Windows Specific Library*/
#else
#include <SDL2/SDL.h> /* MacOS and GNU/Linux Specific Library*/
#endif // _WIN32

/* https://rb.gy/oskvg9 */

/* Set Constants*/

#define HEIGHT 800
#define WIDTH 600
#define DELAY 5000

int main( int argc, char **argv)
{
    /* Initialize data*/

    SDL_Window *window = NULL;
    SDL_Surface *screenSurface = NULL;

    /* Initialize SDL video subsystems
     * Returns 0 on success or a negative number on Error
    */

    if (SDL_Init( SDL_INIT_VIDEO) != 0))
    {
        fprintf( stderr, "SDL failed to initialize: %s\n", SDL_GetError() );
        return (1);
    }

    /* Create Window */

    window = SDL_CreateWindow("The Maze Game"), /* Name of the window*/
                            SDL_WINDOWPOS_UNDEFINED, /* Position x of the window*/
                            SDL_WINDOWPOS_UNDEFINED, /* Position y of the window */
                            HEIGHT, /* Height of the window in pixels*/
                            WIDTH,  /* Width of the window in pixels*/
                            SDL_WINDOW_SHOWN); /* flag to make sure window is shown on creation*/


    return (0);
}
