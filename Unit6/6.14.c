#include <stdio.h>
#define SIZE 6

int medyan(const int a[]);

int main()
{
    int a[SIZE] = {1, 2, 3, 4, 5, 6};
    printf("Medyan: %d\n", medyan(a));

}

int medyan(const int a[])
{
    if (SIZE % 2 == 0)
        return (a[(SIZE+0)/2] + a[(SIZE+0)/2-1]) / 2;
    else
        return a[(SIZE+0)/2];
}
