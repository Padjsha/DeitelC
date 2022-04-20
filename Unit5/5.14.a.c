#include <stdio.h>
#include <stdlib.h>

int select(void);

int main()
{
    int x;
    switch(select())
    {
        case 1:
        x = 2;
        break;

        case 2:
        x = 4;
        break;

        case 3:
        x = 6;
        break;

        case 4:
        x = 8;
        break;

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
    a = 1 + rand() % 4;
    return a;
}
