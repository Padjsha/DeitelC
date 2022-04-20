#include <stdio.h>

int main()
{
    int sales[3][5];

    for (int i = 0 ; i <= 3 -1 ; i++)
    {
        for (int j = 0 ; j <= 5 -1; j++)
            {
                sales[i][j] = 0;
                printf("sales [%d][%d] : %d\n", i, j, sales[i][j]);
            }
    }
}
