#include <stdio.h>

int multi(int, int);

int main()
{
    int x, y;
    printf("2 numbers: \n");
    scanf("%d%d", &x, &y);

    if (y < 0)
    {
        do
        {
            printf("Second number mustn't be negative\nAgain, second number: \n");
            scanf("%d", &y);
        } while (y < 0);
    }

    printf("Result: %d\n", multi(x, y));
    return 0;
}


int multi(int a, int b)
{
    if (b == 1)
        return a;
    else
        return a + multi(a, b-1);
}
