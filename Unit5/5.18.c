#include <stdio.h>

int evenornot(int);

int main()
{
    int number;
    printf("Number (-1 for exit): \n");
    scanf("%d", &number);

    while (number != -1)
    {
        if (evenornot(number) == 1)
            printf("Number is even\n");

        else
            printf("Number is odd\n");

        printf("Number (-1 for exit): \n");
        scanf("%d", &number);
    }
}

int evenornot(int a)
{
    return !(a % 2);
}
