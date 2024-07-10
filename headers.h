#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

#include <stdio.h> /* printf and fprintf*/

#ifdef _WIN32
#include <SDL/SDL.h> /*Windows Specific Library*/
#else
#include <SDL2/SDL.h> /* MacOS and GNU/Linux Specific Library*/
#endif // _WIN32

#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>



#endif // HEADERS_H_INCLUDED
