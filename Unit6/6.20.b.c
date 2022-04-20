#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin(void);

int main()
{
    int status, total, gamerPoint;
    int gameResults[3] = {0};

    srand(time(NULL));

    for (int i = 0 ; i <= 1000 -1 ; i++)
    {
        total = coin();

        switch (total)
        {
            case 7: case 11:
                status = 1; //won
                break;
            
            case 2: case 3: case 12: 
                status = 2; //lost
                break;
            
            default:
                status = 0;
                gamerPoint = total;
                printf("Gamer needs %d to win, but gamer will lose if %d comes\n", gamerPoint, 7);
        }

        while (status == 0)
            {
            total = coin();

            if (total == gamerPoint)
                status = 1;
                
            else if (total == 7)
                status = 2;
            }

        if (status == 1)
            {
                printf("Gamer won!\n");
                ++gameResults[status];               
            }
            
        else
            {
                printf("Gamer lost...\n");
                ++gameResults[status];
            }
    }

    printf("Game Results\nWon: %d\nLost: %d\n", gameResults[1], gameResults[2]); //both win and lose
}

int coin(void)
{
    int a, b, total;
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    total = a + b;
    printf("First: %d, Second: %d,Total: %d\n", a, b, total);
    return total;
}
