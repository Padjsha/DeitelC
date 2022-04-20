#include <stdio.h>

int main(void) 
{
    int length;

    printf("Length of square: \n");
    scanf("%d", &length);

    int line = 1;
    while (line <= length)
    {
        if (line == 1 || line == length)
        {
            int column = 1;
            while (column <= length )
            {
                printf("*");
                column++;
            }
        }

        else 
        {
            int column = 1;
            while (column <= length )
            {
                if (column == 1 || column == length )
                {
                    printf("*");
                    column++;
                }
                else 
                {
                    printf(" ");
                    column++;
                }
            }
        }
        line++;
        printf("\n");
    }
}
