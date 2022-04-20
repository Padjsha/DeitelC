#include <stdio.h>

void square(int, char);

int main()
{
    int side;
    char chr;

    printf("Side length and character: ");
    scanf("%d %c", &side, &chr);

    printf("\n");
    square(side, chr);
}

void square(int a, char b)
{
    for (int i = 1 ; i <= a ; i++)
    {
        for (int j = 1 ; j <= a ; j++)
        {
            printf("%c", b);
        }
        printf("\n");
    }
}
