#include <stdio.h>

int main(void) 
{
    int number;
    printf("Positive integer: \n");
    scanf("%d", &number);

    while (number < 0)
    {
        printf("Positive integer \n");
        scanf("%d", &number);
    }
    
    int fact = 1;
    while ( number > 0)
    {
        fact *= number;
        number -= 1;
    }
    printf("Fact: %d", fact);
}
