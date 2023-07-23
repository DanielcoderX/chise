#ifndef CHIP8_FUNCS_H
#define CHIP8_FUNCS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "defines.h"
#include <stdbool.h>

#define memsize 4096

typedef struct C8 {
    FILE *game;
    unsigned char memory[memsize];
    unsigned char V[16];
    unsigned short I;
    unsigned short pc;
    unsigned char graphics[64 * 32];
    unsigned char delay_timer;
    unsigned char sound_timer;
    unsigned short stack[16];
    unsigned char sp;
    unsigned short opcode;
} C8;

void chip8_start(int argc, char *argv[]);
void chip8_prepare(char *name);
void chip8_initialize(C8 *CH8, char *name);
void chip8_draw(C8 *CH8);
void chip8_timers(C8 *CH8);
void chip8_prec(char *name, SDL_Event *event, bool *paused);
void chip8_execute(C8 *CH8);
void chip8_clear_screen(C8 *CH8);
void chip8_return_subroutine(C8 *CH8);
void chip8_jump(C8 *CH8);
void chip8_skip_equal(C8 *CH8);
void chip8_skip_not_equal(C8 *CH8);
void chip8_skip_equal_registers(C8 *CH8);
void chip8_set_register(C8 *CH8);
void chip8_add_to_register(C8 *CH8);
void chip8_logical_operation(C8 *CH8);
void chip8_shift_right(C8 *CH8);
void chip8_subtract(C8 *CH8);
void chip8_shift_left(C8 *CH8);
void chip8_skip_not_equal_registers(C8 *CH8);
void chip8_set_I(C8 *CH8);
void chip8_jump_with_offset(C8 *CH8);
void chip8_set_random(C8 *CH8);
void chip8_draw_sprite(C8 *CH8);
void chip8_skip_key_pressed(C8 *CH8);
void chip8_skip_key_not_pressed(C8 *CH8);
void chip8_set_delay_timer(C8 *CH8);
void chip8_wait_for_key(C8 *CH8);
void chip8_set_sound_timer(C8 *CH8);
void chip8_add_to_I(C8 *CH8);
void chip8_set_sprite_location(C8 *CH8);
void chip8_store_BCD(C8 *CH8);
void chip8_store_registers(C8 *CH8);
void chip8_load_registers(C8 *CH8);

#endif /* CHIP8_FUNCS_H */
