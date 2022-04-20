#include <stdio.h>
#include <math.h>

int main(void)
{
   int year;
   double total, firstCash = 1000.0, rate = 0.05;

   printf("%4s%4s%21s\n", "Rate", "Year", "Total");

   for (year = 1; year <= 10; year++)
   {
       for (rate = 0.05; rate <= 0.10; rate += 0.01)
       {
       total = firstCash * pow (1.0 + rate, year);
       printf("%3.2f%3d%21.2f\n", rate, year, total);
       }
       printf("\n");
   }
   
   return 0;
}
