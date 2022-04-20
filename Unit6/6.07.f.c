#include <stdio.h>
#define SIZE 6

float average(const int a[]);
float medyan(const int a[]);
int mod(const int a[]);

int main()
{
    int a[SIZE] = {1, 2, 5, 6, 7, 7};

    printf("Average: %.2f\nMedyan: %.2f\nMod: %d\n", average(a), medyan(a), mod(a));

}

float average(const int a[])
{
    float total = 0;
    for (int i = 0 ; i <= SIZE -1 ; i++)
    {
        total += a[i];
    }
    return total / SIZE;
}

float medyan(const int a[])
{
    if (SIZE % 2 == 0)
        return (a[(SIZE+0)/2] + a[(SIZE+0)/2-1]) / 2;
    else
        return a[(SIZE+0)/2];
}

int mod(const int a[])
{
    int mod = 0;
    int frequency[11] = {0};

    for (int i = 0 ; i <= SIZE -1 ; i++)
        ++frequency[a[i]];
    
    for (int i = 0 ; i <= 11 ; i++)
    {
        if (frequency[i] > mod)
            mod = i;
    }
    return mod;
}
