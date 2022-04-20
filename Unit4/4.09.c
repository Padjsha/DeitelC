#include <stdio.h>

main()
{
    int x;

    printf("How much number to get: \n");
    scanf("%d", &x);

    int total = 0, number = 0;

    for (int i = 1; i <= x; i++)
    {
        printf("Number%d: \n", i);
        scanf("%d", &number);
        
        total += number;
    }

    printf("Total: %d", total);
}
