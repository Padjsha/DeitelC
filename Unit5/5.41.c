#include <stdio.h>

long fact(long);

int main()
{
    int i;
    for (i = 1 ; i <= 10 ; i++)
    {
        printf("%2d!=%ld\n", i, fact(i));
    }
    return 0;
}

long fact(long a)
{
    if (a <= 1)
        return 1;
    else
    {   
        printf("%d * fact(%d-1)\n",a, a);
        return (a * fact(a-1));
    }
}
