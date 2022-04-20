#include <stdio.h>

int remainder(int, int);

int main()
{
    int n1, n2;
    printf("Number 1 and number 2: \n");
    scanf("%d%d", &n1, &n2);

    printf("%d\n", remainder(n1, n2));
}

int remainder(int a, int b)
{
    return a%b;
}
