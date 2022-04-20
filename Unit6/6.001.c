#include <stdio.h>
#define SIZE 20

int linearSearch(const int a[], int k3y, int s1ze);

int main()
{
    int array[SIZE];
    int key;

    for (int i = 0 ; i <= SIZE - 1 ; i ++)
        array[i] = i * 2 + 2;

    printf("Key: \n");
    scanf("%d", &key);

    int turner = linearSearch(array, key, SIZE);

    if (turner != -1)
        printf("Key is in %d.\n", turner);
    else
        printf("There is no %d in array.\n", key);

}

int linearSearch(const int a[], int k3y, int s1ze)
{
    for (int i = 0 ; i <= s1ze - 1 ; i++)
    {
        if (a[i] == k3y)
            return i;
    }

    return -1;
}
