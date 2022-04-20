#include <stdio.h>
#include <math.h>

int func(float);

int main()
{
    float x;
  
    do
    {
        printf("Number (-1 for exit): \n");
        scanf("%f", &x);

        if (x == -1)
            return 0;
        else
            printf("Original: %f\tNew: %d\n", x, func(x));       

    } while (x != -1);
}

int func(float a)
{
    return floor(a + 0.5);
}
