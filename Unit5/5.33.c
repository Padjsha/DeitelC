#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rightAnswer(void);
void wrongAnswer(void);

int main()
{
    srand(time(NULL));

    int number1, number2, answer;
    number1 = rand() % 9 + 1;
    number2 = rand() % 9 + 1;

    printf("%d * %d = ?\n", number1, number2);
    scanf("%d", &answer);

    if (answer == number1 * number2)
        {
            rightAnswer();
        }
    
    else   
        {
            while ( answer != number1 * number2)
                {
                    wrongAnswer();
                    scanf("%d", &answer);
                }

                rightAnswer();
        }
}

void rightAnswer(void)
{

    int a;
    a = rand() % 4 + 1;

    switch(a)
    {
        case 1: 
            printf("Very good\n");
            break;
        case 2: 
            printf("Well done\n");
            break;
        case 3:
            printf("Good job\n");
            break;
        case 4:
            printf("Keep going it\n");
            break;
    }
}

void wrongAnswer(void)
{
    
    int a;
    a = rand() % 4 + 1;

    switch(a)
    {
        case 1: 
            printf("Nope...\n");
            break;
        case 2: 
            printf("Try again\n");
            break;
        case 3:
            printf("Don't give up\n");
            break;
        case 4:
            printf("Keep trying\n");
            break;
    }
}
