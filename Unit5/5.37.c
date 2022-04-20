#include <stdio.h>
#include <math.h>

int power(int, int);

int main()
{
    int base, exponent;
    printf("Base and exponent: \n");
    scanf("%d%d", &base, &exponent);

    printf("%d ^ %d = %d\n", base, exponent, power(base, exponent));
    
}


int power(int a, int b)
{
    if (b == 0)
        return 1;
    else if (a == 1)
        return 1; 
    else if (b == 1)
        return a;
    else
        return a * pow(a, b-1);
}
