#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

int main()
{
    srand(time(NULL));

    int number1, number2;
    int answer;
    number1 = rand() % 10;
    number2 = rand() % 10;

    printf("%d * %d = ?\n", number1, number2);
    scanf("%d", &answer);

    if (answer == number1 * number2)
        printf("Well done!\n");
    else
    {   
        while (answer != number1 * number2)
        {
            printf("Try again: \n");
            scanf("%d", &answer);
        }
        printf("Finally, right!\n");
    }

}
