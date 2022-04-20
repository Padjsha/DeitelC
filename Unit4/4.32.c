#include <stdio.h>

int main()
{

    int value, tempValue;
    printf("Number for print: \n");
    scanf("%d", &value);

    while (value % 2 == 0)
    {
        printf("Value should be odd\nTry another: \n");
        scanf("%d", &value);
    }

    tempValue = value;

    int a, b;
    int x, y; //used temporary symbolic values because it should be reset and be different from ZERO in for loop

//first part
    x = tempValue / 2, y = 1;
    for (int i = 1 ; i <= tempValue / 2 + 1 ; i++)
    {
  
        for (a = x ; a > 0 ; a--)
                printf(" ");

        for (b = y ; b > 0 && b <= value ; b--)
                printf("*");

        printf("\n");
        x--;
        y += 2;
    } 


// second part
    x = 1, y = tempValue - 2;
    for (int i = 1 ; i <= tempValue / 2 ; i++)
    {
        for (a = x ; a > 0 ; a--)
            printf(" ");

        for (b = y ; b > 0 ; b--)
            printf("*");
        
        printf("\n");
        x++;
        y -= 2;
    }
}
