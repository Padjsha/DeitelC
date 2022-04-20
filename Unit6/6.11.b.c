#include <stdio.h>
#define SIZE 10

int main() //improving of bubble sort
{
    int a[SIZE] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 18};
    int counter[11] = {0};
    int temp;

    printf("Original Array\n");
    for (int i = 0 ; i <= SIZE -1 ; i++)
        printf("%3d", a[i]);

    for (int j = 0 ; j <= SIZE -1 ; j++)
    {
        temp = 0; //I'll use it as flag too.
        for (int i = 0 ; i <= SIZE - j - 2 ; i++)
        {
            ++counter[j]; //rounds counter
            if (a[i] > a[i+1])
            {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            }
        }
        if (temp == 0)
            break;
    }

    printf("\nArray after ''Bubble Sort''\n");
    for (int i = 0 ; i <= SIZE -1 ; i++)
        printf("%3d", a[i]);

    //Control of decreasing in rounds
    for (int i = 0 ; i <= 9 -1 ; i++)
    {
        printf("\n%d. round happened for %dx times", i+1, counter[i]);
    }
}
