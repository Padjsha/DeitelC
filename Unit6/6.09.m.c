#include <stdio.h>
#define LINES 2
#define HOLES 5

int main()
{
   int t[LINES][HOLES] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   int total = 0;
   for (int i = 0 ; i <= LINES -1 ; i++)
        total += t[i][4-1];

   printf("Total: %d\n", total);
}
