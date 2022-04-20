#include <stdio.h>

int main()
{
    float a[99];

    for (int i = 0 ; i <= 99 -1 ; i++)
        a[i] = 1 * i + i * 0.05 + 0.03;
    
    float max = 0.0, min = 99999.99;

    for (int i = 0 ; i <= 99 -1 ; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    printf("Max: %.2f\nMin: %.2f\n", max, min);
}
