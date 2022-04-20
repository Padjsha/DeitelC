#include <stdio.h>
#define SIZE 3

int main()
{
    int table[SIZE][SIZE] = { {1, 8},
                              {2, 4, 6},
                              {5} };

    for (int i = 0 ; i <= SIZE -1 ; i++)
    {
        for (int j = 0 ; j <= SIZE -1 ; j++)
            printf("%d\t", table[i][j]); 
        printf("\n");
    }
}
