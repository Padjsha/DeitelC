#include <stdio.h>
#define SIZE 10

void aFunction(int a[], int b);

int main()
{
    int a[SIZE] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

    printf("Values in array: \n");
    aFunction(a, SIZE);
    printf("\n");
    return 0;
}

void aFunction(int a[], int b)
{
    if (b > 0)
    {
        aFunction(&a[1], b - 1);
        printf("%d ", a[0]);
    }
}
