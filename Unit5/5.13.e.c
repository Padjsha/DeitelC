#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;

    for (int i = 1 ; i <= 100 ; i++)
    {
        y =  -1 + rand() % 3;
        printf("%d\t", y);
    }

}
