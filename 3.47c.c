#include <stdio.h>
#include <math.h>

int main(void) 
{
    float e = 1.0, nFact = 1;
    
    int x;
    printf("x: \n");
    scanf("%d", &x);

    int i = 1;
    while ( i <= 3)
    {
        nFact *= i;
        e = e + x/nFact;
        i++;
        x = x * x;
    } 

    printf("%.2f", e);
}

// here there is another solution and results are different (?).


