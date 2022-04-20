#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;

    for (int i = 1 ; i <= 100 ; i++)
    {
        y =  rand() % 10;
        printf("%d\t", y);
    }

}
