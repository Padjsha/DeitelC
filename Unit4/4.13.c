#include <stdio.h>

int main(void)
{
    int res = 1;

    for (int i = 1; i <= 15; i+=2)
    {
        res *= i;
    }

    printf("Result: %d", res);
}
