#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int keepANumber(void);
int getGuess(void);
int right(void);
void increase(void);
void decrease(void);

int main()
{
    int number;
    int guess;
    int counter = 0;

    do
    {
        number = keepANumber();
        guess = getGuess();

        printf("%d\n", number);

        while (guess != number)
        {
            counter++;
            
            if (guess < number)
            {
                increase();
                guess = getGuess();
            }

            if (guess > number)
            {
                decrease();
                guess = getGuess();
            }
        }

        if (counter < 10)
            printf("You know how to play, you found the number with just %d times try\n", counter);
    } while (right() == 1);
}


int keepANumber(void)
{
    srand(time(NULL));
    return rand() % 999 + 1;
}

int getGuess(void)
{
    int number;
    printf("What is your guess (1-1000): \n");
    scanf("%d", &number);
    return number;
}

int right(void)
{
    int c;
    printf("Right!\nPlay again? 1/2?\n");
    scanf("%d", &c);
    return c;
}

void increase(void)
{
    printf("Let's increase your guess\n");
}

void decrease(void)
{
    printf("Let's decrease your guess\n");
}
