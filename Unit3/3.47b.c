#include <stdio.h>

int main(void) 
{
    float e = 1.0, nFact = 1;
    
    int n;
    printf("Euler accuracy: \n");
    scanf("%d", &n);

    int i = 1;
    while ( i <= n)
    {
        nFact *= i;
        e = e + 1/nFact;
        i++;
    } 

    printf("%.2f", e);
}




