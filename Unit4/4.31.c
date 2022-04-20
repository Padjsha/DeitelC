#include <stdio.h>

int main()
{

    int a, b;
    int x, y; //used temporary symbolic values because it should be reset and be different from ZERO in for loop

//first part
    x = 4, y = 1;
    for (int i = 1 ; i <= 5 ; i++)
    {
  
        for (a = x ; a > 0 ; a--)
                printf(" ");

        for (b = y ; b > 0 && b <= 9 ; b--)
                printf("*");

        printf("\n");
        x--;
        y += 2;
    } 


// second part
    x = 1, y = 7;
    for (int i = 1 ; i <= 4 ; i++)
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
