#include <stdio.h>

int main(void) 
{
    int number;
    printf("Number in binary: \n");
    scanf("%d", &number);

    int new, temp, cr;  
    temp = number;

    int counter = 1;
    while ( temp != 0 )
    {
        cr = temp%10;
        new = new + cr * counter;
        temp /= 10;
        counter *= 2;
    }

    printf("In binary: %d, is %d in decimal", number, new);
}
