#include <stdio.h>

int main(void)
{
    float percentage; 

    printf("Amount of sale (-1 for exit): \n");
    scanf("%f", &percentage);

    while (percentage != -1)
    {
        printf("Salary: %.2f$\n", (percentage * 9 / 100) + 200);

        printf("Amount of sale (-1 for exit): \n");
        scanf("%f", &percentage);
    }
}
