#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> /* getch() and kbhit() */
#include "matrice.c"

#define H  47
#define L 180

// The function to display the matrice on the screen
void display(screen* s)
{
    for (int i = 0; i < s->h; i++)
    {
        for (int j = 0; j < s->l; j++) printf("%c", s->m[i][j]);
        printf("\n");
    }
}

int main(void)
{
    screen* s = screen_init(H,L);
    fill(s,'C');
    display(s);
    screen_free(s);
    return 0;
}