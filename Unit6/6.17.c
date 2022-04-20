#include <stdio.h>
#define SIZE 10

int whatIsThat(int a[], int b);

int main()
{
    int total, a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    total = whatIsThat(a, SIZE);
    printf("Array values, total, %d\n", total);
    return 0;

}

int whatIsThat(int a[], int b)
{
    if (b == 1)
        return a[0];
    else
        return a[b-1] + whatIsThat(a, b - 1);
}
