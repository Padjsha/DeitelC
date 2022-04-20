#include <stdio.h>
#define SIZE 5

int main() //improved bubble sort and best scores display on table
{
    int bestScores[SIZE] = {90, 94, 86, 97, 91};
    int temp;
    int sorted = 1;

    for (int i = 0 ; i <= SIZE -1 ; i++)
    {
        for (int j = 0 ; j <= SIZE - 2 - i ; j++)
        {
            if (bestScores[j] < bestScores[j+1])
            {
                temp = bestScores[j];
                bestScores[j] = bestScores[j+1];
                bestScores[j+1] = temp;
                sorted = 0;
            }
        }
        if (sorted == 1)
            break;
    }

    printf("%15s", "Best Scores");
    for (int i = 0 ; i <= SIZE -1 ; i++)
        printf("%5d", i+1);  

    printf("\n%15s", "");
    for (int i = 0 ; i <= SIZE -1 ; i++)
        printf("%5d", bestScores[i]);
}
