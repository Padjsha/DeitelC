#include <stdio.h>

int main(void)
{
    int i;

    for (int a = 1 ; a <= 5 ; a++)
    {
        printf("Number: \n");
        scanf("%d", &i);

        for (int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
