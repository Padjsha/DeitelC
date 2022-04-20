#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rightAnswer(void);
void wrongAnswer(void);

int main()
{
    srand(time(NULL));

    int number1, number2, answer;

    
    int rightCounter = 0;

    for (int i = 1 ; i <= 10 ; i++)
    {

    number1 = rand() % 9 + 1;
    number2 = rand() % 9 + 1;

    printf("%d * %d = ?\n", number1, number2);
    scanf("%d", &answer);

    if (answer == number1 * number2)
        {
            rightAnswer();
            rightCounter++;
        }
    
    else   
        {
            wrongAnswer();
        }
    
    }

    if ((float) rightCounter/10 < 0.75)
        printf("See your teacher.\n");
}

void rightAnswer(void)
{

    int a;
    a = rand() % 4 + 1;

    printf("Keep going it\n");
}

void wrongAnswer(void)
{
    
    int a;
    a = rand() % 4 + 1;

    printf("Don't give up\n");     
}
