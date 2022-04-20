#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for (int i = 1 ; i <= 100 ; i++)
    {
        y =  1 + rand() % 2;
        printf("%d", y);

        if (y == 1)
            c1++;
        else if (y == 2)
            c2++;
        else 
            c3++;
    }

    printf("%5d%5d%5d\n", c1, c2 ,c3); //control

}
