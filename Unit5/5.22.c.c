#include <stdio.h>

int remainder(int, int);
int quotient(int, int);

int main()
{
    int number;
    printf("Number: \n");
    scanf("%d", &number);

    if (number > 0 && number <= 32767)
    {
            int temp = number;
            int counter = 0;

            while (temp > 0)
            {
                if (temp > 0)
                {
                    temp = quotient(temp, 10);
                    counter++;
                }
                
                else
                    break;
            }
            
            printf("Orders of number: %d\n", counter);
            
            int ordersOfNumber = counter;
            int temp2 = number;

            for (int i = ordersOfNumber ; i > 0 ; i--)
            {    
                int counter2 = 0;
            
                while (temp2 > 10)
                {
                    temp2 /= 10;
                    counter2++;
                }
            
                printf("%d", temp2);
                printf("  ");

                switch(counter2)
                {
                    case 1: 
                    temp2 = number - temp2 * 10;
                    number = temp2;
                    break;

                    case 2:
                    temp2 = number - temp2 * 100;
                    number = temp2;
                    break;

                    case 3:
                    temp2 = number - temp2 * 1000;
                    number = temp2;
                    break;

                    case 4:
                    temp2 = number - temp2 * 10000;
                    number = temp2;
                    break;

                    default:
                    break;
                }

            }

    }

    else
        printf("Number must be between 0 and 32767\nExecute program again with a number in limits\n");


}

int quotient(int a, int b)
{
    return a/b;
}

int remainder(int c, int d)
{
    return c%d;
}

