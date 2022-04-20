#include <stdio.h>

int main(void)
{
    int fact = 1;

    for (int i = 1 ; i <= 5 ; i++)
    {
        fact *= i;
        printf("%d fact: %d\n", i, fact);
    }
}
