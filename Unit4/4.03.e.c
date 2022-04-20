#include <stdio.h>
#include <math.h>

int main()
{
   for (int x = 1; x <= 20; x++)
   {
	   printf("%d", x);
	   
	   if ( x % 5 == 0)
		printf("\n");

	   else
	   	printf("\t");

   }

}
