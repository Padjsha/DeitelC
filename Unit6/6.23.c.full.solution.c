#include <stdio.h> // * means smallest accessibility (so go for it)
#define sizeA 8   // 2, 3, 4, 5, 6, 7, 8, 9 : directions
#define sizeB 8  // # means you stepped this squre before
                // _ means you you haven't step this square before 
               // If program doesn't show any *, you have just one way, and go for it.

void move(int a[][sizeB], int b, int c[][sizeB]); //a : table, c : access everytime
void printTable(int a[][sizeB], int c[][sizeB]);
int checkMin(int c[][sizeB]);
void accessControl(int a[][sizeB], int c[][sizeB]);


int memoryA = 0, memoryB = 0; //your start point on table
int moveCounter = 0;

int main()
{
    int table[sizeA][sizeB] = {0};
    int access[sizeA][sizeB] = { {2, 3, 4, 4, 4, 4, 3, 2}, //this array for detect hardest points
                                 {3, 4, 6, 6, 6, 6, 4, 3},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {3, 4, 6, 6, 6, 6, 4, 3},
                                 {2, 3, 4, 4, 4, 4, 3, 2} };

    int accessReal[sizeA][sizeB]; //this is array of real/right accessibility numbers

    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        for (int j = 0 ; j <= sizeB -1 ; j++)
            accessReal[i][j] = access[i][j];
    }

    int choose = 0;
    printTable(table, access);

    while (choose != -1)
    {
        printf("\nChoose your move (-1 for exit): \n");
        scanf("%d", &choose);


        while (choose < 2 || choose > 9)
            {
                if (choose == -1);
                break;
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
        case 8:
            x = -1, y = +2;
            break;
        case 9:
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
                printf("\n1\t%d\n", checkMin(c));

                if (memoryA-1 >= 0 && memoryA-1 <= 7 && memoryB+2 >= 0 && memoryB+2 <= 7) //decrease accessibility of this point
                    --c[memoryA-1][memoryB+2]; 
                
                if (memoryA-2 >= 0 && memoryA-2 <= 7 && memoryB+1 >= 0 && memoryB+1 <= 7)
                    --c[memoryA-2][memoryB+1];  
                
                if (memoryA-2 >= 0 && memoryA-2 <= 7 && memoryB-1 >= 0 && memoryB-1 <= 7)
                    --c[memoryA-2][memoryB-1];  
                
                if (memoryA-1 >= 0 && memoryA-1 <= 7 && memoryB-2 >= 0 && memoryB-2 <= 7)
                    --c[memoryA-1][memoryB-2]; 
                
                if (memoryA+1 >= 0 && memoryA+1 <= 7 && memoryB-2 >= 0 && memoryB-2 <= 7)
                    --c[memoryA+1][memoryB-2]; 
                
                if (memoryA+2 >= 0 && memoryA+2 <= 7 && memoryB-1 >= 0 && memoryB-1 <= 7)
                    --c[memoryA+2][memoryB-1];  
                
                if (memoryA+2 >= 0 && memoryA+2 <= 7 && memoryB+1 >= 0 && memoryB+1 <= 7)
                    --c[memoryA+2][memoryB+1]; 
                
                if (memoryA+1 >= 0 && memoryA+1 <= 7 && memoryB+2 >= 0 && memoryB+2 <= 7)
                    --c[memoryA+1][memoryB+2]; 
                
                printf("\n2\t%d\n", checkMin(c));
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
                    a[memoryA-1][memoryB+2] = 8; 

                if (memoryA-2 >= 0 && memoryA-2 <= 7 && memoryB+1 >= 0 && memoryB+1 <= 7 && a[memoryA-2][memoryB+1] != 1)
                    a[memoryA-2][memoryB+1] = 9; 

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
                
            else if (a[i][j] == 1)
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
            if (c[i][j] < min && c[i][j] != 0)
                min = c[i][j];
    }

    return min;
}
