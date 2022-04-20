#include <stdio.h>

int main(void) 
{
    int a, b, c;
    printf("3 number: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("a: %d, b: %d, c: %d\n", a, b, c);

    int biggest, small1, small2;

    if ( a > b && a > c )
    {
        biggest = a;
        small1 = b;
        small2 = c;
    }
    if ( c > b && c > a )
    {       
        biggest = c;
        small1 = b;
        small2 = a;
    }
    if ( b > a && b > c )
    {    
        biggest = b;
        small1 = a;
        small2 = c;
    }

    if (biggest * biggest != small1 * small1 + small2 * small2)
    {
        printf("There cannot be an right triangle with these numbers\n");
    }
}
