#include <stdio.h>

int main(void) 
{
    int biggest = 0, second = 0, counter = 0, number;

    while (counter < 10)
    {
        printf("Number: \n");
        scanf("%i", &number);

        if (number > biggest)
        {
            second = biggest;
            biggest = number;
        }
        else if (number > second)
        {
            second = number;
        }
        else
        {
            ;
        }
  
        printf("Biggest number is %d for now, and second one is %d\n", biggest, second);
        counter++;
    }

    printf("The biggest number is %d, and second one is %d\n", biggest, second);
}
