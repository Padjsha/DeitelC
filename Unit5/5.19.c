#include <stdio.h>

void square(int);

int main()
{
    int side;
    printf("Side length: \n");
    scanf("%d", &side);

    square(side);
}

void square(int a)
{
    for (int i = 1 ; i <= a ; i++)
    {
        for (int j = 1 ; j <= a ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
