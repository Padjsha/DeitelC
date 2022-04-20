#include <stdio.h>
#include <stdlib.h>

int select(void);

int main()
{
    int x;
    switch(select())
    {
        case 1:
        x = 3;
        break;

        case 2:
        x = 5;
        break;

        case 3:
        x = 7;
        break;

        case 4:
        x = 9;
        break;

        case 5:
        x = 11;

        default: 
        break;
    }

    printf("Number: %d", x);
}

int select(void)
{
    unsigned a1;
    printf("Control: \n");
    scanf("%u", &a1);
    srand(a1);

    int a;
    a = 1 + rand() % 5;
    return a;
}
