#include <stdio.h>

int min(int, int, int);

int main(void) 
{
    int a, b, c;
    printf("3 integers: \n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Min. number: %d\n", min(a, b, c));
}

int min(int x, int y, int z)
{
    int min = x;

    if (y < min) 
    {
        min = y;
    }

    if (z < min)
    {
        min = z;
    }

    return min;
}
