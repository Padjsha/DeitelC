#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(void);
int game(void);

int main()
{
    int credit = 1000, bet;
    int temp, temp2, control, gamerPoint;

    printf("Your bet: \n");
    scanf("%d", &bet);

    while (bet > credit)
    {
        printf("Bet should be under %d: \n", credit);
        scanf("%d", &bet);
    }

    while (credit >= bet)
    {
        srand(time(NULL));
        temp = game();

        switch(temp)
            {
                case 7: case 11:
                    control = 1; //win
                    break;

                case 2: case 3: case 12: 
                    control = 2; //lose
                    break;

                default: 
                    control = 0; //continue
                    gamerPoint = temp;
                    printf("The number for gamer's win: %d\n", gamerPoint);
                    break;
            }

        while (control == 0)
            {
                temp2 = game();

                if (temp2 == gamerPoint)
                    control = 1;
                else if (temp2 == 7)
                    control = 2;
            }

        if (control == 1)
                {
                    printf("Gamer won\n");
                    credit += bet;
                    printf("New credit: %d\n", credit);
                }
        else
                {
                    printf("Gamer lost\n");
                    credit -= bet;
                    printf("New credit: %d\n", credit);

                    if (credit == 0)
                        return 0;
                }

        printf("Your bet: \n");
        scanf("%d", &bet);

        while (bet > credit)
            {
                printf("Bet should be under %d: \n", credit);
                scanf("%d", &bet);
            }
        
    }
}




int roll(void)
{
    int dice1, dice2, totalDice;
    dice1 = 1 + (rand() % 6);
    dice2 = 1 + (rand() % 6);
    totalDice = dice1 + dice2;
    printf("Total dice = %d\n", totalDice);
    return totalDice;
}

int game(void)
{
    return roll();
}
