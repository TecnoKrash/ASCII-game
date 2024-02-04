// This file is there to create and manage the matrice of caractere before sending it to the main for the display.

#inlcude <stdio.h>
#include <stdlib.h>

// A function to initialize the matrice
// I let h and l in entries even if they are fixed if i later allow the player to change the resolution 
char** matrice_init(int h, int l)
{
    char* m = malloc(sizeof(char*)*l*h);
    for (int i = 0; i < h; i++)
    {
        m[i] = malloc(sizeof(char)*l);
    }
    return t;
}

