#include <stdio.h>

int main(void)
{
   int productNumber, amount, price;
   float totalPrice = 0;

   printf("Product number (-1 for exit): \n");
   scanf("%d", &productNumber);

   while (productNumber != -1)
   {
       printf("Amount of sales: \n");
       scanf("%d", &amount);

       switch (productNumber)
       {
           case 1: 
                printf("Amount of total sale: %f$\n", amount*2.98);
                totalPrice += amount*2.98;
                break;
           case 2: 
                printf("Amount of total sale: %f$\n", amount*4.50);
                totalPrice += amount*4.50;
                break;
           case 3: 
                printf("Amount of total sale: %f$\n", amount*9.98);
                totalPrice += amount*9.98;
                break;
           case 4: 
                printf("Amount of total sale: %f$\n", amount*4.49);
                totalPrice += amount*4.49;
                break;
           case 5: 
                printf("Amount of total sale: %f$\n", amount*6.87);
                totalPrice += amount*6.87;
                break;
       }

       printf("Product number (-1 for exit): \n");
       scanf("%d", &productNumber);
   }
   printf("\nTotal amount of sale: %f", totalPrice);
}
