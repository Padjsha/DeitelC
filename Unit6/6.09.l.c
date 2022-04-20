#include <stdio.h>
#define LINES 2
#define HOLES 5

int main()
{
   int t[LINES][HOLES] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   
    for (int j = 0 ; j <= HOLES -1 ; j++)
        printf("%d ", t[1-1][j]);
}
