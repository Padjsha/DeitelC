#include <stdio.h>

int main(void) 
{
    int biggest = 0, counter = 0, number;

    while (counter < 10)
    {
        printf("Number: \n");
        scanf("%i", &number);
        if (number > biggest)
        {
            biggest = number;
        }
        else 
        {
            ;
        }

        printf("Biggest number is %d for now\n", biggest);
        counter++;
    }

    printf("The biggest number is %d\n", biggest);
}
