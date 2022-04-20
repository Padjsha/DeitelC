#include <stdio.h>

int main(void) 
{
    int number;
    printf("Number (5 digits): \n");
    scanf("%d", &number);
    
    int temp, new = 0, cr = 0;
    temp = number;

    while (temp != 0)
    {
        cr = temp % 10;
        new = cr + new * 10;
        temp /= 10;
    }

    if ( new == number )
    {
        printf("Number is palindrome.\n");
    }
    else 
    {
        printf("Number is not palindrome.\n");
    }

}
