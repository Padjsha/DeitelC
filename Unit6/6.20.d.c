#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin(void);
enum status {CONTINUE, WON, LOST}; //game status

int main()
{
    int total, gamerPoint;
    int gameResults[3] = {0}; // won or lose?
    int time1, time2; 
    int winCounter[22] = {0}; // first, second, third......20nd and more rounds of rolling dices in case of game status = CONTINUE
    int loseCounter[22] = {0}; // ^same
    int round;
    enum status status;

    srand(time(NULL));

    for (int i = 0 ; i <= 1000 -1 ; i++) // 100x game
    {
        round = 1;
        total = coin();

        switch (total)
        {
            case 7: case 11: //direct win @ 7 or 11
                status = WON;
                ++gameResults[status];
                ++winCounter[round];
                break;
            
            case 2: case 3: case 12: //direct lose @ 2, 3 and 12
                status = LOST;
                ++gameResults[status];
                ++loseCounter[round];
                break;
            
            default: //game continues
                status = CONTINUE;
                gamerPoint = total;
                break;
        }

        while (status == CONTINUE)
            {
                round++; //rounds in same game continues

                if (round > 21) // for 21nd+22nd......100nd rounds if game continues by chance
                    round = 21;
                
                total = coin();

                if (total == gamerPoint)
                {   
                    status = WON;
                    ++winCounter[round];
                    ++gameResults[status];
                }
                    
                else if (total == 7)
                {    
                    status = LOST;
                    ++loseCounter[round];
                    ++gameResults[status];
                }
            }
        printf("\n");
    }

    for (round = 1 ; round <= 21 ; round++)
        {
            printf("%d. round\t%d win\t%d lose\n", round, winCounter[round], loseCounter[round]); //here says what is game status in first, second .... 20nd rounds
        }
    printf("\n------------------\n");
    printf("Game Results\nWon: %d\nLost: %d\n", gameResults[1], gameResults[2]);

    int a = gameResults[1], b = gameResults[2];
    printf("Win ratio in this game: %.2f%c\n", (float) a / (a+b) * 100, '%'); //here it says the win ratio
    
    printf("Time of %dx game: %d seconds", 100, time2 - time1); //time of 100 games
}

int coin(void)
{
    int a, b, total;
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    total = a + b;
    return total;
}
