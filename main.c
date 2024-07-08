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

    if (SDL_Init( SDL_INIT_VIDEO) != 0))
    {
        fprintf( stderr, "SDL failed to initialize: %s\n", SDL_GetError() );
        return (1);
    }

    return (0);
}
