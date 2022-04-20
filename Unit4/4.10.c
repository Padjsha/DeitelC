#include <stdio.h>

main(void)
{
    float number, total = 0.0, average;
    int counter = 0;

    printf("Number: \n");
    scanf("%f", &number);

    while (number != 9999)
    {
        total += number;
        counter++;
        
        printf("Number: \n");
        scanf("%f", &number);
        
    }

    average = total / counter;
    printf("Average: %.2f", average);
}
