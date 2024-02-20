// This file is there to create and manage the matrice of caractere before sending it to the main for the display.
// size of the screen : 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// A struct for to have the size along with the screen
struct screen_s
{
    char** m;
    int h;
    int l;
};

typedef struct screen_s screen;


struct object_s
{
    char** m;
    int h;
    int l;
    char name[];
};

typedef struct object_s obj;

// A function to initialize the matrice
// I let h and l in entries even if they are fixed if i later allow the player to change the resolution 
screen* screen_init(int h, int l)
{
    screen* s = malloc(sizeof(screen));
    s->m = malloc(sizeof(char*)*h);
    for (int i = 0; i < h; i++)
    {
        s->m[i] = malloc(sizeof(char)*l);
    }
    s->h = h;
    s->l = l;
    return s;
}


// this function fill the screen with the caracter c (it's mastly for testing)
void fill(screen* s, char c)
{
    for (int i = 0; i < s->h; i++)
    {
        for (int j = 0; j < s->l; j ++)
        {
            s->m[i][j] = c;
        }
    }
}

// This function adds the object at the coordinate x and y
void add_obj(screen* s, obj* o, int x, int y)
{
    assert(x + (o->l) < (s->l) && y + (o->h) < (s->h));
    for (int i = y; i < o->h; i++)
    {
        for (int j = x; j < o->l; i++)
        {
            s->m[i][j] = o->m[i-x][j-x];
        }
    }
}

void screen_free(screen* s)
{
    for (int i = 0; i < s->h; i++)
    {
        free(s->m[i]);
    }
    free(s->m);
    free(s);
}


void obj_free(obj* o)
{
    for (int i = 0; i < o->h; i++)
    {
        free(o->m[i]);
    }
    free(o->m);
    free(o);
}