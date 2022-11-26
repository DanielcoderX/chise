#ifndef DEFINES_H_
#define DEFINES_H_
#include "stdio.h"
// General Declarations
#define memsize 4096
#define SCREEN_W 640
#define SCREEN_H 320
#define SCREEN_BPP 32
#define W 64
#define H 32

// Program Declarations

typedef struct chip8{
    FILE * game;

    unsigned short opcode;
    unsigned char memory[memsize];
    unsigned char V[0x10];
    unsigned short I;
    unsigned short pc;
    unsigned char graphics[64 * 32];
    unsigned char delay_timer;
    unsigned char sound_timer;
    unsigned short stack[0x10];
    unsigned short sp;
    unsigned char key[0x10];
} C8;

//0x000-0x1FF - Chip 8 interpreter (contains font set in emu)
//0x050-0x0A0 - Used for the built in 4x5 pixel font set (0-F)
//0x200-0xFFF - Program ROM and work RAM

#endif
