#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chip8_funcs.h"
int main(int argc, char *argv[])
{
    char *dot = strrchr(argv[1], '.');
    if (argc <= 1){
        printf("At least one argument needed! use --help\n");
        exit(0);
    }
    if (strcmp(argv[1],"--help")==0){
        printf("Usage:\n");
        printf("    build/emu <filename.ch8> or build/emu <filename.rom>\n");
        printf("    test chip8 programs are in ch8 directory\n");
        exit(0);
    }
    if (!dot || !strcmp(dot,"ch8") || !strcmp(dot,"rom"))
    {
        printf("No such file or directory %s !",argv[1]);
        exit(0);
    }else{
        chip8_start(argc,argv);
        return 0;
    }
}
