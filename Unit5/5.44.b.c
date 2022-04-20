#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void rightAnswer(void);
void wrongAnswer(void);
int mix(void);

int main()
{
    int number1, number2;
    int level, kind;
    
    int answer;
    
    int sum, difference, multiply, divide;

    for (int i = 1 ; i <= 3 ; i++)
    {
  
        printf("Level: \n");
        scanf("%d", &level);

        srand(time(NULL));

        if (level == 1)
        {
            
            number1 = rand() % 9 + 1;
            number2 = rand() % 9 + 1;
        }

        else if (level == 2)
        {
            printf("4\n");
            number1 = rand() % 99 + 1;
            number2 = rand() % 99 + 1;
        }
        
        
        printf("1 for sum\n2 for difference\n3 for multiply\n4 for divide\n5 for mix\n");
        scanf("%d", &kind);

        sum = number1 + number2;
        difference = number1 - number2;
        multiply = number1 * number2;
        divide = number1 / number2;

        if (kind == 5)
        {
            kind = mix();
        }
        switch(kind)
        {
            case 1:  
                    printf("%d + %d: \n", number1, number2);
                    scanf("%d", &answer);
                    if (answer == sum)
                        rightAnswer();
                    else 
                        wrongAnswer();
                    break;
            case 2: 
                    printf("%d - %d: \n", number1, number2);
                    scanf("%d", &answer);
                    if (answer == difference)
                        rightAnswer();
                    else 
                        wrongAnswer();
                    break;
            case 3:
                    printf("%d * %d: \n", number1, number2);
                    scanf("%d", &answer);
                    if (answer == multiply)
                        rightAnswer();
                    else 
                        wrongAnswer();
                    break;
            case 4:
                    printf("%d / %d: \n", number1, number2);
                    scanf("%d", &answer);
                    if (answer == divide)
                        rightAnswer();
                    else 
                        wrongAnswer();
                    break;
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


int mix(void)
{
    int a = rand() % 4 + 1;
    return a;
}
