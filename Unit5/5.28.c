#include <stdio.h>

void reverse(int);

int main()
{
    int number;
    printf("Number: \n");
    scanf("%d", &number);

    reverse(number);

}

void reverse(int a)
{
    while (a > 0)
    {
        printf("%d", a % 10);
        a /= 10;
    }
}
