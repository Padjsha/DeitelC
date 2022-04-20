#include <stdio.h>
#include <stdlib.h>

int flip(void);

int main()
{
    int counterHeads = 0, counterTails = 0;
    for (int i = 1 ; i <= 100 ; i++)
    {
        if (flip() == 1)
        {
            printf("heads\n");
            counterHeads++;
        }
        
        else 
        {
            printf("tails\n");
            counterTails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", counterHeads, counterTails);
}

int flip(void)
{
    return rand() % 2;
}
