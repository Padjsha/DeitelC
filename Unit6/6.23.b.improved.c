#include <stdio.h> //assisted
#define sizeA 8
#define sizeB 8

void move(int a[][sizeB], int b);
void printTable(int a[][sizeB]);


int memoryA = 0, memoryB = 0;
int moveCounter = 0;

int main()
{
    int table[sizeA][sizeB] = {0};
    
    int choose = 0;
    printTable(table);

    while (choose != -1)
    {
        printf("\nChoose your move (-1 to exit): \n");
        scanf("%d", &choose);
        while (choose < 2 || choose > 7 && choose < 10 || choose > 11)
            {
            printf("Wrong type. Try again. \n");
            scanf("%d", &choose);
            }
        move(table, choose);
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
        case 10:
            x = -1, y = +2;
            break;
        case 11:
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

                for (int i = 0 ; i <= sizeA -1 ; i++)
                {
                    for (int j = 0 ; j <= sizeB -1 ; j++)
                    {
                        if (a[i][j] != 1)
                            a[i][j] = 0;
                    } 
                }

                if (memoryA-1 >= 0 && memoryA-1 <= 7 && memoryB+2 >= 0 && memoryB+2 <= 7 && a[memoryA-1][memoryB+2] != 1)
                    a[memoryA-1][memoryB+2] = 10; 

                if (memoryA-2 >= 0 && memoryA-2 <= 7 && memoryB+1 >= 0 && memoryB+1 <= 7 && a[memoryA-2][memoryB+1] != 1)
                    a[memoryA-2][memoryB+1] = 11; 

                if (memoryA-2 >= 0 && memoryA-2 <= 7 && memoryB-1 >= 0 && memoryB-1 <= 7 && a[memoryA-2][memoryB-1] != 1)
                    a[memoryA-2][memoryB-1] = 2; 

                if (memoryA-1 >= 0 && memoryA-1 <= 7 && memoryB-2 >= 0 && memoryB-2 <= 7 && a[memoryA-1][memoryB-2] != 1)
                    a[memoryA-1][memoryB-2] = 3;

                if (memoryA+1 >= 0 && memoryA+1 <= 7 && memoryB-2 >= 0 && memoryB-2 <= 7 && a[memoryA+1][memoryB-2] != 1)
                    a[memoryA+1][memoryB-2] = 4;

                if (memoryA+2 >= 0 && memoryA+2 <= 7 && memoryB-1 >= 0 && memoryB-1 <= 7 && a[memoryA+2][memoryB-1] != 1)
                    a[memoryA+2][memoryB-1] = 5; 
                    
                if (memoryA+2 >= 0 && memoryA+2 <= 7 && memoryB+1 >= 0 && memoryB+1 <= 7 && a[memoryA+2][memoryB+1] != 1)
                    a[memoryA+2][memoryB+1] = 6;

                if (memoryA+1 >= 0 && memoryA+1 <= 7 && memoryB+2 >= 0 && memoryB+2 <= 7 && a[memoryA+1][memoryB+2] != 1)
                    a[memoryA+1][memoryB+2] = 7; 

                printTable(a);
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
            else if (a[i][j] == 1)
                printf("%c%c%c", ' ','#', ' ');
            else
                printf("%c%d%c", ' ', a[i][j], ' ');
        }
        printf("\n");
    }
    printf("\n");
}
