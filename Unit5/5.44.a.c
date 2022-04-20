#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rightAnswer(void);
void wrongAnswer(void);

int main()
{
    int number1, number2, counter = 0;
    int level;
    
    printf("Level: \n");
    scanf("%d", &level);

    for (int i = 1 ; i <= 3 ; i++)
    {
        srand(time(NULL));

        if (level == 1)
        {
            number1 = rand() % 9 + 1;
            number2 = rand() % 9 + 1;
        }

        else if (level == 2)
        {
            number1 = rand() % 99 + 1;
            number2 = rand() % 99 + 1;
        }

        printf("%d * %d = ?\n", number1, number2);
        int answer;
        scanf("%d", &answer);
        
        if (answer != number1 * number2)
        {
            wrongAnswer();
        }

        else if (answer == number1 * number2)
        {
            rightAnswer();
        }
    }

}



void rightAnswer(void)
{
    int a;
    a = rand() % 3 + 1;
    switch(a)
    {
        case 1:
            printf("Well\n");
            break;
        case 2:
            printf("Good\n");
            break;
        case 3:
            printf("Right\n");
            break;
        case 4:
            printf("Keep going it\n");
            break;
    }
}

void wrongAnswer(void)
{
    int a;
    a = rand() % 3 + 1;
    switch(a)
    {
        case 1:
            printf("Nope\n");
            break;
        case 2:
            printf("Wrong\n");
            break;
        case 3:
            printf("Oops\n");
            break;
        case 4:
            printf("Try again\n");
            break;
    }
}
