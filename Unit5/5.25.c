#include <stdio.h>

float min(float, float, float);

int main()
{
    float x, y, z;
    printf("3 number: \n");
    scanf("%f%f%f", &x, &y, &z);

    printf("Minimum number among them all is: %.2f\n", min(x, y, z));
}

float min(float a, float b, float c)
{
    float minimum;
    minimum = a;

    if (b < minimum)
        minimum = b;

    if (c < minimum)
        minimum = c;

    return minimum;
}
