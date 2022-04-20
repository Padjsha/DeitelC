#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin(void);

int main()
{
    int first, second, total;
    int counter[13] = {0};
    srand(time(NULL));

    for (int i = 0 ; i <= 3600 -1 ; i++)
    {
        first = coin();
        second = coin();
        total = first + second; 
        ++counter[total];
    }

    printf("%7s%12s\n", "Total", "Many Times");
    for (int i = 0 ; i <= 13 -1 ; i++)
    {
        if (i < 2 )
            continue;
        else
            printf("%5d%10d\n", i, counter[i]);
    }
}

int coin(void)
{
    int a = rand() % 6 + 1;
    return a;
}
