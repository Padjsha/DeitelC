#include <stdio.h>

int powerornot(int, int);

int main()
{
    int a, b;

    printf("First number: \n");
    scanf("%d", &a);

    printf("Second number: \n");
    scanf("%d", &b);

    if (powerornot(a, b) == 1)
        printf("Aliquot\n");
    
    else 
        printf("Not-aliquot\n");
    
}

int powerornot(int a, int b)
{
    if ( b % a == 0)
        return 1;
    
    else 
        return 0;
}
