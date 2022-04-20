#include <stdio.h>

int main(void)
{
    int counter, number, smallest;

    printf("How much numbers you will put: \n");
    scanf("%d", &counter);


    for (int i = 1; i <= counter; i++)
    {
        printf("Number %d: \n", i);
        scanf("%d", &number);

        if ( i == 1 )
            smallest = number;
        
        if (number < smallest)
            smallest = number;
        
    }

    printf("Smallest number: %d\n", smallest);
}
