#include <stdio.h>

int main(void) 
{
    int i = 1;
    int j = 1;
    while (i <= 4)
    {
        int j = 1;
        while (j <= 4)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}
