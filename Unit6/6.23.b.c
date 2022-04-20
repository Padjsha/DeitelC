#include <stdio.h>
#define sizeA 8
#define sizeB 8

void move(int a[][sizeB], int b);
void printTable(int a[][sizeB]);

int memoryA = 3, memoryB = 4;
int moveCounter = 0;

int main()
{
    int table[sizeA][sizeB] = {0};
    int choose = 0;
    
    while (choose != -1)
    {
        printTable(table);
        printf("\nChoose your move (-1 to exit): \n");
        scanf("%d", &choose);
        move(table, choose);
        printTable(table);
        printf("\n-----\n\n");
    }

    printf("\n");
    printTable(table);
    printf("-----\nMove record: %d\n-----\n", moveCounter);
}



void move(int a[][sizeB], int b) //b: move
{
    int x, y;

    switch (b)
    {
        case 0:
            x = -1, y = +2;
            break;
        case 1:
            x = -2, y = +1;
            break;
        case 2:
            x = -2, y = -1;
            break;
        case 3:
            x = -1, y = -2;
            break;
        case 4:
            x= +1, y = -2;
            break;
        case 5:
            x = +2, y = -1;
            break;
        case 6:
            x = +2, y = +1;
            break;
        case 7:
            x = +1, y = +2;
            break;
    }

    
    if (a[memoryA+x][memoryB+y] == 1)
            {
                printf("Horse came here before!\n");
            }
    else if (memoryA + x < 0 || memoryA + x > 7 || memoryB + y < 0 || memoryB + y > 7)
            {
                printf("You are out of table!\n");
            }
    else
            {
                memoryA = memoryA + x;
                memoryB = memoryB + y;
                a[memoryA][memoryB] = 1;
                moveCounter++;
            }
}


void printTable(int a[][sizeB])
{
    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        for (int j = 0 ; j <= sizeB -1; j++)
        {
            if (a[i][j] == 0)
                printf("%c%c%c", ' ', '_', ' ');
            else
                printf("%c%c%c", ' ','#', ' ');
        }
        printf("\n");
    }
    printf("\n");
}
