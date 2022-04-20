#include <stdio.h>
#define SIZE 10

int main()
{
    int extra[SIZE] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};

    printf("Original Array\n");
    for (int i = 0 ; i <= SIZE -1 ; i++)
        printf("%3d", extra[i]);

    for (int i = 0 ; i <= SIZE -1 ; i++)
        ++extra[i];

    printf("\nArray after increase\n");
    for (int i = 0 ; i <= SIZE -1 ; i++)
        printf("%3d", extra[i]);
}
