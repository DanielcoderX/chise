#ifndef CHIP8_FUNCS_
#define CHIP_FUNCS_
#include "defines.h"
#include "SDL/SDL.h"
void chip8_initialize(C8 *, char *);
void chip8_execute(C8 *);
void chip8_draw(C8 *);
void chip8_prec(char *, SDL_Event *);
void chip8_prepare(char *);
void chip8_start();
#endif
