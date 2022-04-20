#include <stdio.h> // * means smallest accessibility (so go for it)
#define sizeA 8   // 2, 3, 4, 5, 6, 7, 8, 9 : directions
#define sizeB 8  // # means you stepped this squre before
                // _ means you you haven't step this square before 
               // If program doesn't show any *, you have just one way, and go for it.

void move(int a[][sizeB], int b, int c[][sizeB], int l[], int cl[]); //a : table, c : accessibility
void printTable(int a[][sizeB], int c[][sizeB], int l[], int cl[]);
int checkMin(int a[][sizeB], int c[][sizeB]);
void start(int a[][sizeB], int g);
void betterOne(int a[][sizeB], int c[][sizeB], int l[], int cl[]); //future accessibility - NOT WORK


int memoryA, memoryB; //start point on table
int moveCounter = 0;

int main()
{
    int table[sizeA][sizeB] = {0};
    int access[sizeA][sizeB] = { {2, 3, 4, 4, 4, 4, 3, 2}, //this array for detect points have fewer accessibility
                                 {3, 4, 6, 6, 6, 6, 4, 3},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {4, 6, 8, 8, 8, 8, 6, 4},
                                 {3, 4, 6, 6, 6, 6, 4, 3},
                                 {2, 3, 4, 4, 4, 4, 3, 2} };

    int line[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int col[8] =  {2, 1, -1, -2, -2, -1, 1, 2};

    int controlForBetter[8][2];
    for (int i = 0 ; i <= 8 -1; i++)
    {
        for (int j = 0 ; j <= 2 -1 ; j++)
            controlForBetter[i][j] = -1; //make all array -1 because 0 will be needed
    }
    
    start(table, moveCounter);
    printTable(table, access, line, col);

    int choose = 0;
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
        move(table, choose, access, line, col);
        printf("\n-----\n\n");
    }

    printf("\n");
    printTable(table, access, line, col);
    printf("-----\nMove record: %d\n-----\n", moveCounter);
}



void move(int a[][sizeB], int b, int c[][sizeB], int l[], int cl[]) //b: move
{
    int x, y;

    switch (b)
    {
        case 8:
            x = l[0], y = cl[0];
            break;
        case 9:
            x = l[1], y = cl[1];
            break;
        case 2:
            x = l[2], y = cl[2];
            break;
        case 3:
            x = l[3], y = cl[3];
            break;
        case 4:
            x= l[4], y = cl[4];
            break;
        case 5:
            x = l[5], y = cl[5];
            break;
        case 6:
            x = l[6], y = cl[6];
            break;
        case 7:
            x = l[7], y = cl[7];
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

                for (int i = 0 ; i <= 8 -1 ; i++)
                {
                    if ((memoryA+l[i] >= 0 && memoryA+l[i] <= 7) && (memoryB+cl[i] >= 0 && memoryB+cl[i] <= 7))
                        --c[memoryA+l[i]][memoryB+cl[i]];
                }

                moveCounter++;

                for (int i = 0 ; i <= sizeA -1 ; i++) //resetting values of squares after showing directions
                {
                    for (int j = 0 ; j <= sizeB -1 ; j++)
                    {
                        if (a[i][j] != 1)
                            a[i][j] = 0;
                    } 
                }

                printTable(a, c, l, cl);
            }   
}    



void printTable(int a[][sizeB], int c[][sizeB], int l[], int cl[])
{


    if (memoryA-1 >= 0 && memoryA-1 <= 7 && memoryB+2 >= 0 && memoryB+2 <= 7 && a[memoryA-1][memoryB+2] != 1)
        a[memoryA-1][memoryB+2] = 8; 

    if (memoryA-2 >= 0 && memoryA-2 <= 7 && memoryB+1 >= 0 && memoryB+1 <= 7 && a[memoryA-2][memoryB+1] != 1)
        a[memoryA-2][memoryB+1] = 9; 

    for (int i = 2 ; i <= 8 -1 ; i++)
    {
        if ((memoryA+l[i] >= 0 && memoryA+l[i] <= 7) && (memoryB+cl[i] >= 0 && memoryB+cl[i] <= 7) && a[memoryA+l[i]][memoryB+cl[i]] != 1)
            a[memoryA+l[i]][memoryB+cl[i]] = i;
    }

    printf("%c\t", ' ');
    for (int i = 0 ; i <= 8 -1 ; i++)
    {
        printf("%c%d%c", ' ', i, ' ');
    }    
    printf("\n\n\n");

    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        printf("%d\t", i);
        for (int j = 0 ; j <= sizeB -1; j++)
        {
            if (a[i][j] == 0)
                {
                    if (c[i][j] == checkMin(a, c))
                        printf("%c%c%c", ' ', '*', ' ');
                         //lead to hard ones.
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

                    betterOne(a, c, l, cl);
}



int checkMin(int a[][sizeB], int c[][sizeB])
{
    int min = 10;
    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        for (int j = 0 ; j <= sizeB -1 ; j++)
            if (c[i][j] < min && c[i][j] != 0 && a[i][j] != 1)
                min = c[i][j];
    }

    return min;
}



void start(int a[][sizeB], int g) //g is counter;
{
    printf("%c\t", ' ');
    for (int i = 0 ; i <= 8 -1 ; i++)
    {
        printf("%2d", i);
    }    
    printf("\n\n\n");

    for (int i = 0 ; i <= 8 -1 ; i++)
    {
        printf("%d\t", i);
        for (int j = 0 ; j <= 8 -1 ; j++)
        {
            printf("|_");
        }
        printf("|\n");
    }
    printf("Choose your line and column: \n");
    scanf("%d%d", &memoryA, &memoryB);
    a[memoryA][memoryB] = 1;
    g++;
}



void betterOne(int a[][sizeB], int c[][sizeB], int l[], int cl[])
{

    int minimum = 10;
    int minimum2 = 10;
    int first = 35, second = 34;

    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        if ((memoryA+l[i] >= 0 && memoryA+l[i] <= 7) && (memoryB+cl[i] >= 0 && memoryB+cl[i] <= 7) && (a[memoryA+l[i]][memoryB+cl[i]] != 1))
        {
            if (c[memoryA+l[i]][memoryB+cl[i]] < minimum)
                {
                minimum = c[memoryA+l[i]][memoryB+cl[i]]; //finds minimu
                }
        }
    }

    for (int i = 0 ; i <= sizeA -1 ; i++)
    {
        if ((memoryA+l[i] >= 0 && memoryA+l[i] <= 7) && (memoryB+cl[i] >= 0 && memoryB+cl[i] <= 7) && a[memoryA+l[i]][memoryB+cl[i]] != 1)
        {
            
            if (c[memoryA+l[i]][memoryB+cl[i]] == minimum) //determine and save minimum accessibility points
            {
                
                for (int k = 0 ; k <= 8 -1 ; k++)
                {
                    if ((memoryA+l[i]+l[k] >= 0 && memoryA+l[i]+l[k] <= 7) && (memoryB+cl[i]+cl[k] >= 0 && memoryB+cl[i]+cl[k] <= 7) && a[memoryA+l[i]+l[k]][memoryB+cl[i]+cl[k]] != 1)
                    {
                        
                        if (c[memoryA+l[i]+l[k]][memoryB+cl[i]+cl[k]] < minimum2)
                        {
                            
                            minimum2 = c[memoryA+l[i]+l[k]][memoryB+cl[i]+cl[k]];
                            first = i; 
                            second = k;
                        }
                            
                    }
                }
            }
        }
    }

    if (first == 0)
        printf("Go for 8 first,");
    else if (first == 1)
        printf("Go for 9 first,");
    else if (first == 35)
        printf("FINISH\n");
    else
        printf("Go for %d first,", first);
    
    if (second == 0)
        printf(" then 8.\n");
    else if (second == 1)
        printf(" then 9.\n");
    else if (second == 34)
        printf("...\n");
    else
        printf(" then %d", second); 
}
