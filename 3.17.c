#include <stdio.h>

int main(void)
{
    float totalKm = 0;
    float totalGallon = 0;
    float km, gallon;
    float kmPerGallon;

    printf("\nKm (-1 for exit): ");
    scanf("%f", &km);

    while (km != -1)
    {
        printf("\nGallon: ");
        scanf("%f", &gallon);

        kmPerGallon = km / gallon;
        printf("\nKm per gallon: %.2f", kmPerGallon);

        totalKm += km;
        totalGallon += gallon;

        printf("\nKm : (-1 for exit)");
        scanf("%f", &km);
    }


    float average = totalKm / totalGallon;
    printf("\nTotal average: %.2f", average);
}
