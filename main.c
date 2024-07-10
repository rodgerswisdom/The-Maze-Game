/**
 * File: main.c
 * Description: This file contains the main function and
 *              the entry point for the program.
 * Author: Rodgers Wisdom
 * Email: trulyhawona@gmail.com
 * Date: July 8, 2024
 */




#include <stdio.h> /* printf and fprintf*/

#ifdef _WIN32
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
    if (SDL_Init( SDL_INIT_VIDEO) != 0)
    {
        fprintf( stderr, "SDL failed to initialize: %s\n", SDL_GetError() );
        return (1);
    }

    /* Create Window */
    window = SDL_CreateWindow("The Maze Game", /* Name of the window*/
                            SDL_WINDOWPOS_UNDEFINED, /* Position x of the window*/
                            SDL_WINDOWPOS_UNDEFINED, /* Position y of the window */
                            HEIGHT, /* Height of the window in pixels*/
                            WIDTH,  /* Width of the window in pixels*/
                            SDL_WINDOW_SHOWN); /* flag to make sure window is shown on creation*/


    /* Check if window has been created */
    if (window == NULL)
    {
        fprintf( stderr, "SDL Window failed to initialize: %s\n", SDL_GetError() );
        return (1);
    }

    /* Pause activity for 5000 milliseconds */
    SDL_Delay( DELAY );

    /* Free space occupied by window */
    SDL_DestroyWindow( window );

    /* Shut down all SDL Sub Systems */
    SDL_Quit();

    return (0);
}
