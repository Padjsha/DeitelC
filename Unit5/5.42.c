#include <stdio.h>

int biggestDivisor(int, int);

int main()
{
    int a, b;
    int biggestDivide;

    printf("Two numbers: \n");
    scanf("%d%d", &a, &b);

    printf("%d\n",biggestDivisor(a, b));
    
    /* TRYING own method:
    int smallOne = a;
    
    if (b < a)
    {
        smallOne = b;
    }

    for (int i = smallOne ; i > 0 ; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            biggestDivide = i;
            printf("Biggest divide of both %d and %d is: %d\n", a, b, biggestDivide);
            return 0;
        }
    }   
    */
}


int biggestDivisor(int x, int y)
{
    if (y == 0)
        return x;
    else
        biggestDivisor(y, x % y);
}
