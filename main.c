#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> /* getch() and kbhit() */

int main(void)
{
    int j = 0;
    int i = 0;
    while(1)
    {
        if (i == 25) printf("        |        |\n");
        if (i == 24) printf("        _________\n");
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