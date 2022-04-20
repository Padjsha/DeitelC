#include <stdio.h>
#include <math.h>
#include <time.h>

int prime1(int);
int prime2(int);

int main()
{
    int i = 1;
    int time1a, time1b, time2a, time2b;
    
    time1a = time(NULL);
    for (i = 1 ; i <= 100000 ; i++)
    {
        if (prime1(i) == 1)
            printf("%d is prime\n", i);
    } 
    time1b = time(NULL);

    time2a = time(NULL);
    for (i = 1 ; i <= 100000 ; i++)
    {
        if (prime2(i) == 1)
            printf("%d is prime\n", i);
    } 
    time2b = time(NULL);

    printf("number/2 time: %d\n", time1b-time1a);
    printf("sqrt(number) time: %d\n", time2b-time2a);

}


int prime1(int a)
{
    for (int i = 2; i < a / 2 ; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int prime2(int a)
{
    for (int i = 2; i < (int) floor(sqrt(a)) ; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
