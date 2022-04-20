#include <stdio.h>
#define LINES 2
#define HOLES 5

int main()
{
    int t[LINES][HOLES] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%5s", "L/H");
    for (int k = 1 ; k <= HOLES ; k++)
        printf("%5d", k);

    printf("\n");

    for (int j = 1 ; j <= 2 ; j++)
    {
        printf("%5d", j);
        for (int i = 0 ; i <= HOLES -1 ; i++)
            printf("%5d", t[j-1][i]);
    
        printf("\n");
    }
}
