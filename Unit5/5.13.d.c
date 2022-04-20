#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;

    for (int i = 1 ; i <= 100 ; i++)
    {
        y =  1000 + rand() % 13;
        printf("%d\t", y);
    }

}
