#include <stdio.h>
#define SIZE 3

int main()
{
    int table[SIZE][SIZE];

    for (int i = 0 ; i <= SIZE -1 ; i++)
    {
        for (int j = 0 ; j <= SIZE -1 ; j++)
            table[i][j] = i + j;
    }

    for (int i = 0 ; i <= SIZE -1 ; i++)
    {
        for (int j = 0 ; j <= SIZE -1 ; j++)
            printf("%d\t", table[i][j]); 
        printf("\n");
    }   
}
