#include <stdio.h>
#define SIZE 12

int main()
{
    float monthlyTemperatures[SIZE];
    for (int i = 0 ; i <= SIZE -1; i++)
    {
        printf("Temperature of %d. month: \n", i+1);
        scanf("%f", &monthlyTemperatures[i]);
    }
    
    printf("Monthly temperatures: \n");
    for (int i = 0 ; i <= SIZE -1 ; i++)
        printf("%.2f\t", monthlyTemperatures[i]);
}
