#include <stdio.h>

int main()
{
    float a[11] = {1,1,1,1,1,1,1,1,1,1,1}, b[34] = {0};

    for (int i = 0; i <= 11 -1 ; i++)
        b[i] = a[i];

    for (int i = 0 ; i <= 34 -1 ; i++)
        printf("%.1f ", b[i]);
}
