#include <stdio.h>

long powerofint(long, long);

int main()
{
    long num, pow;

    printf("Number: \n");
    scanf("%ld", &num);

    printf("Power: \n");
    scanf("%ld", &pow);

    printf("Result: %ld\n", powerofint(num, pow));
}

long powerofint(long a, long b)
{
    double power = 1; 
    for (int i = 1 ; i <= b ; i++)
    {
        power *= a;
    }
    return power;
}
