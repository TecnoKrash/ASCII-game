#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> /* getch() and kbhit() */

// The function to display the matrice on the screen
void display(char** t; int h; int l)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++) printf(t[i][j]);
    }
}

int main(void)
{
    int j = 0;
    int i = 0;
    while(1)
    {
        if (i == 25) printf("        |        |\n");
        if (i == 24) 
        {
            printf("                                                                                                     |");
            printf("         |         |         |         |         |         |01234567");
        }
        if (i == 26) printf("        _________\n");
        if (i == 41) printf("%d\n",j);
        if (i == 42)
        {
            j++;
            i = 0;
            printf("Test %d\n",j);
            Sleep(1);
        }
        if (i < 42) printf(" \n");
        i++;
    }
    return 0;
}