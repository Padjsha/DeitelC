#include <stdio.h>

int main(void)
{
    float capital, ratio, days;
    float interest;

    printf("Capital (-1 for exit): \n");
    scanf("%f", &capital);

    while ( capital != -1 )
    {
        printf("Ratio: \n");
        scanf("%f", &ratio);

        printf("Days: \n");
        scanf("%f", &days);

        interest = capital * ratio * days / 365;

        printf("Interest is: %.2f$\n", interest);

        printf("Capital (-1 for exit): \n");
        scanf("%f", &capital);
    }
}
