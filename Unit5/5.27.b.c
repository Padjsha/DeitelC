#include <stdio.h>

int prime(int);

int main()
{
    for (int number = 1 ; number <= 1000 ; number++)
    {
    if (prime(number) == 0)
        printf("%d is prime\n", number);

    }
}

int prime(int a)
{
    int sum = 0;
    for (int i = 2; i < a ; i++)
    {
        if (a % i == 0)
            sum += i;
    }
    return sum;
}
