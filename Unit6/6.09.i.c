#include <stdio.h>
#define LINES 2
#define HOLES 5

int main()
{
    int t[LINES][HOLES];
    for (int i = 0 ; i <= LINES -1 ; i++)
    {
        for (int j = 0 ; j <= HOLES -1 ; j++)
            t[i][j] = 0;
    }
}
