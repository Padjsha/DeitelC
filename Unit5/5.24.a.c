#include <stdio.h>

float degree(float);

int main()

{
    float F;
    printf("Degree (F): \n");
    scanf("%f", &F);

    printf("Degree (C) is %.2f when (F) is %f\n", degree(F), F);
}

float degree(float a)
{
    return ((100 * a - 3200) / 180);
}
