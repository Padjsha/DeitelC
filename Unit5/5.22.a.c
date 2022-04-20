#include <stdio.h>

int quotient(float, float);

int main()
{
    float n1, n2;
    printf("Number 1 and number 2: \n");
    scanf("%f%f", &n1, &n2);

    printf("%d\n", quotient(n1, n2));
}

int quotient(float a, float b)
{
    return (int)(a/b);
}
