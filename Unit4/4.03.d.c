#include <stdio.h>
#include <math.h>

int main()
{
   int x = 1;

   while (x <= 20)
   {
	   printf("%d", x);

	   if ( x % 5 == 0)
		printf("\n");

	   else
	   	printf("\t");

	   x++;
   }
}
