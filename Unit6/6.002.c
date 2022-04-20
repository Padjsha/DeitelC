#include <stdio.h>
#define SIZE 15

int binarySearch(const int a[], int k3y, int max, int min);
void printTitle(void);
void printLine(const int a[], int min, int middle, int max);


int main()
{
    int array[SIZE], key, turner;

    for (int i = 0 ; i <= SIZE - 1 ; i++)
        array[i] = 2 * i;

    printf("Put a number between 0 & 28 as a key\n");
    scanf("%d", &key);

    printTitle();
    
    turner = binarySearch(array, key, SIZE - 1, 0);

    if (turner != -1)
        printf("\n%d, %d. in array\n", key, turner);
    else    
        printf("There is no %d in array\n", key);

    return 0;
}

int binarySearch(const int a[], int k3y, int max, int min)
{
    int middle;
    while (min <= max)
    {
        middle = (min + max) / 2;

        printLine(a, min, middle, max);
    
        if (k3y == a[middle])
            return middle;
        else if (k3y < a[middle])
            max = middle - 1;
        else 
            min = middle + 1;
    } 
    return -1;
}

void printTitle(void)
{
    for (int i = 0 ; i <= SIZE - 1 ; i++)
        printf("%3d ", i);
    
    printf("\n");

    for (int i = 1 ; i <= SIZE * 4 ; i++)
        printf("-");

    printf("\n");
}

void printLine(const int a[], int min, int middle, int max)
{
    for (int i = 0 ; i <= SIZE - 1 ; i++)
    {
        if (i < min || i > max)
            printf("   ");
        else if (i == middle)
            printf("%3d*", a[i]);
        else 
            printf("%3d ", a[i]);

    }
    printf("\n");
}
