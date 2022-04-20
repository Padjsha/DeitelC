#include <stdio.h>

int main(void) 
{
    int number;
    printf("4 digits number: \n");
    scanf("%d", &number);

    while (number < 1000 || number > 9999)
    {
        printf("4 digits number: \n");
        scanf("%d", &number);
    }

    int a, b, c, d;
    int temp = number;

    a = number % 10; 
    number /= 10;
    b = number % 10; 
    number /= 10;
    c = number % 10; 
    number /= 10;
    d = number % 10;

    a = (a + 7) % 10;
    b = (b + 7) % 10;
    c = (c + 7) % 10;
    d = (d + 7) % 10;
    
    printf("Cypher number: %d%d%d%d\n", c,d,a,b);
}
