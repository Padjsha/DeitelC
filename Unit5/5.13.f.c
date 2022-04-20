#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;

    for (int i = 1 ; i <= 100 ; i++)
    {
        y =  -3 + rand() % 15;
        printf("%d\t", y);
    }

}
