#include "chip8_funcs.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("At least one argument needed! Use --help for usage.\n");
        exit(0);
    }

    char *dot = strrchr(argv[1], '.');
    if (strcmp(argv[1], "--help") == 0) {
        printf("Usage:\n");
        printf("    build/emu <filename.ch8> or build/emu <filename.rom>\n");
        printf("    Test CHIP-8 programs are in the 'ch8' directory.\n");
        exit(0);
    }

    if (!dot || (strcmp(dot, ".ch8") != 0 && strcmp(dot, ".rom") != 0)) {
        printf("Invalid file format! Please use '.ch8' or '.rom' files.\n");
        exit(0);
    } else {
        chip8_start(argc, argv);
        return 0;
    }
}