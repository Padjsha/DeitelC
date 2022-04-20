#include <stdio.h>
#include <math.h> 

int main(void)
{
    float pi = 4;
    float a = 4.0;
    int counter = 1;

    for ( int i = 3 ; i < 333 ; i = (i+2) )
    {
        pi = pi - a/i;
        a *= -1;

        printf("Counter = %d\npi = %.2f\n", counter++, pi);
    }

}
