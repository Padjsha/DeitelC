#include <stdio.h>

int main(void)
{
   int total = 0;

   for (int i = 2 ; i <= 30 ; i+=2)
   {
       total += i;     
   }

   printf("Total: %d\n", total);
}
