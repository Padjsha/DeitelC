#include <stdio.h>
#include <math.h> 

int main(void)
{
    int a, b, c;
    int counter = 1;
    for (a = 1 ; a <= 500 ; a++)
    {
        for (b = 1 ; b <= 500 ; b++)
        {
            for (c = 1 ; c <= 500 ; c++)
            {
                if ( a*a + b*b == c*c )
                {
                    printf("%5d%5d%5d%6d\n", a, b, c, counter);
                    counter++;
                }
            }
        }
    }
}
