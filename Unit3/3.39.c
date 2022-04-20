#include <stdio.h>

int main(void) 
{
    int number;
    printf("Integer: \n");
    scanf("%d", &number);

    int temp = number, counter = 0;
    int seven;

    while (temp != 0)
    {
        seven = temp%10;
        if (seven == 7)
        {
            counter += 1;
        }
        temp /= 10;
    }
    printf("There is %d x 7 in %d", counter, number);
}
