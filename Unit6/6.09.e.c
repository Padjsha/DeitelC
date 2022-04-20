#include <stdio.h>
#define LINES 2
#define HOLES 5

int main()
{
    int t[LINES][HOLES];
    
    for (int i = 0 ; i <= HOLES -1 ; i++)
        printf("t[%d][%d]\t", LINES - 1, i);
    printf("\n");
}
