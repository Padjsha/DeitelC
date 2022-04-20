#include <stdio.h>

int main(void)
{
    float accountNumber, balance, expense, credit, creditLimit; 
    float newBalance;

    printf("Put account number in (-1 for exit): \n");
    scanf("%f", &accountNumber); 

    while (accountNumber != -1)
    {
        printf("Balance at beginning of the month: \n");
        scanf("%f", &balance);

        printf("Total expense in the month\n");
        scanf("%f", &expense);

        printf("Credit for month: \n");
        scanf("%f", &credit);

        printf("Credit limit: \n");
        scanf("%f", &creditLimit);

        newBalance = balance + expense - credit;

        if ( newBalance > creditLimit)
        {
                printf("Balance: %.2f\nCredit limit: %.2f\nNew balance: %.2f\nLimit's over\n", balance, creditLimit, newBalance);
        }
        else
        {
            ;
        }

        printf("\nPut account number in (-1 for exit): \n");
        scanf("%f", &accountNumber); 

    }



}
