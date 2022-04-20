#include <stdio.h>
#define sizeA 8
#define sizeB 8

void move(int a[][sizeB], int b, int c[][sizeB]); //a : table, c : access everytime
void printTable(int a[][sizeB], int c[][sizeB]);
int checkMin(int c[][sizeB]);


int memoryA = 0, memoryB = 0;
int moveCounter = 0;

int main()
{
    int table[sizeA][sizeB] = {0};
    int access[sizeA][sizeB] = { {2, 3, 4, 4, 4, 4, 3, 2},
                                 {3, 4, 6, 6, 6, 6, 4, 3},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {3, 4, 6, 6, 6, 6, 4, 3},
                                 {2, 3, 4, 4, 4, 4, 3, 2} };

    int choose = 0;
    printTable(table, access);

    while (choose != -1)
    {
        printf("\nChoose your move (-1 to exit): \n");
        scanf("%d", &choose);
        while (choose < 2 || choose > 7 && choose < 10 || choose > 11)
            {
            printf("Wrong type. Try again. \n");
            scanf("%d", &choose);
            }
        move(table, choose, access);
        printf("\n-----\n\n");
    }

    printf("\n");
    printTable(table, access);
    printf("-----\nMove record: %d\n-----\n", moveCounter);
}



void move(int a[][sizeB], int b, int c[][sizeB]) //b: move
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
                c[memoryA][memoryB] = 10;
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

                printTable(a, c);
            }
}


void printTable(int a[][sizeB], int c[][sizeB])
{
    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        for (int j = 0 ; j <= sizeB -1; j++)
        {
            if (a[i][j] == 0)
                {
                    if (c[i][j] == checkMin(c))
                        printf("%c%c%c", ' ', '*', ' '); //lead to hard ones.
                    else
                        printf("%c%c%c", ' ', '_', ' ');
                }
                
            else if (a[i][j] == 1 && c[i][j] == 10)
                printf("%c%c%c", ' ','#', ' ');
            else
                printf("%c%d%c", ' ', a[i][j], ' ');
        }
        printf("\n");
    }
    printf("\n");
}

int checkMin(int c[][sizeB])
{
    int min = 10;
    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        for (int j = 0 ; j <= sizeB -1 ; j++)
            if (c[i][j] < min)
                min = c[i][j];
    }

    return min;
}

// 
