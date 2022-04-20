#include <stdio.h>
#define LINES 2
#define HOLES 5

int main()
{
   int t[LINES][HOLES];

   for (int i = 0 ; i <= LINES -1 ; i++)
   {
       for (int j = 0 ; j <= HOLES -1 ; j++)
       {
           printf("t[%d][%d]: \n", i, j);
           scanf("%d", &t[i][j]);
       }
   }

   int min = 9999;
    for (int i = 0 ; i <= LINES -1 ; i++)
    {
        for (int j = 0 ; j <= HOLES -1 ; j++)
        {
            if (min > t[i][j])
                min = t[i][j];
        }
    }

    printf("%d\n", min);
}
