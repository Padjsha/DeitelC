#include <stdio.h>

int main(void) 
{
    float a, b, c;
    printf("3 number: \n");
    scanf("%f %f %f", &a, &b, &c);

    printf("a: %.2f, b: %.2f, c: %.2f\n", a, b, c);

    if (a + b < c || a + c < b || c + b < a)
    {
        printf("It cannot be a triangle with these numbers\n");
    }
    else 
    {
        printf("There can a triangle be.\n");
    }
}
