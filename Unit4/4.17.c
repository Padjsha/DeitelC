#include <stdio.h>

int main(void)
{
   int accountNumber, previousCreditLimit, balance;
   int newCreditLimit;
   for (int i = 1 ; i <= 3 ; i++)
   {
       printf("Account number: \n");
       scanf("%d", &accountNumber);

       printf("Previous credit limit: \n");
       scanf("%d", &previousCreditLimit);

       printf("Balance: \n");
       scanf("%d", &balance);

       newCreditLimit = previousCreditLimit / 2;

       if (newCreditLimit < balance)
       {
           printf("For account %d credit limit is over\n", accountNumber);
       }
   }
}
