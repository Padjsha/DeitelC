#include <stdio.h>
#define SIZE 20

int main()
{
    int number[SIZE];
    int counter[SIZE+1] = {0};

    for (int i = 0 ; i <= SIZE -1 ; i++)
    {
        printf("Write a number between 10 and 100\n");
        scanf("%d", &number[i]);

        while (number[i] < 10 || number[i] > 100)
        {
            printf("Number should be between 10 and 100!\n");
            scanf("%d", &number[i]);
        }
        
        ++counter[number[i]];
        if (counter[number[i]] == 1)
            printf("%d\n", number[i]);
    }
}
