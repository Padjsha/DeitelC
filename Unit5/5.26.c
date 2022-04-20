#include <stdio.h>

int perfect(int);

int main()
{
    for (int i = 2 ; i <= 1000 ; i++)
    {
        if (perfect(i) == 1)
        {
            printf("%d is perfect number: \t", i);

            for (int j = 1 ; j < i ; j++)
            {
                if (i % j == 0)
                    printf("%d ", j);
            }
            printf("\n");
        }
    }
}

int perfect(int a)
{
    int sum = 0;

    for (int i = 1 ; i < a ; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    
    if (sum == a)
        return 1;
    else
        return 0;
}
