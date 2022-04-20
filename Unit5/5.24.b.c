#include <stdio.h>

float degree(float);

int main()

{
    float C;
    printf("Degree (C): \n");
    scanf("%f", &C);

    printf("Degree (F) is %.2f when (C) is %f\n", degree(C), C);
}

float degree(float a)
{
    return (1.8 * a + 32);
}
