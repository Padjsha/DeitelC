#include <stdio.h> //another solution https://github.com/lbraglia/chtp/blob/master/src/06_23.c
#define sizeA 50
#define sizeB 50

void goForward(int a[][50], int b, int c);
void printMatrix(int a[][50]);

int memoryA = 0, memoryB = 0; //memory of coordination
int penStatus; //will write @ 1, won't write @ 0

int main()
{
    int code;
    int direction = 0; // 0: east, 1: north, 2: west, 3: south 
    int steps;


    int matrix[sizeA][sizeB] = {0};

    do
    {
        printf("Your program (Press 9 for exit): \n");
        scanf("%d", &code);
        switch (code)
        {
            case 1:
                penStatus = 0; //pen won't write
                break;
            case 2:
                penStatus = 1; //pen will write
                break;
            case 3:
                direction += 3; //turn right
                break;
            case 4: 
                direction += 1; //turn left
                break;
            case 5:
            {
                printf("Steps: \n");
                scanf("%d", &steps);
                goForward(matrix, steps, direction);
                break;
            }
            case 6:
                printMatrix(matrix);
                break;
            case 9: 
                return 0;
        }
        
    } while (code != 9);    
}

void goForward(int a[][sizeB], int b, int c) //b: steps, c: direction
{
    for (int i = 0 ; i <= b -1 ; i++)
    {
        if (c % 4 == 0)
        {
            memoryB++;
            if (penStatus == 1)
                a[memoryA][memoryB] = 1;
            else
                a[memoryA][memoryB] = 0;
        }
        else if (c % 4 == 1)
        {
            memoryA--;
            if (penStatus == 1)
                a[memoryA][memoryB] = 1;
            else
                a[memoryA][memoryB] = 0;
        }
        else if (c % 4 == 2)
        {
            memoryB--;
            if (penStatus == 1)
                a[memoryA][memoryB] = 1;
            else
                a[memoryA][memoryB] = 0;
        }
        else 
        {
            memoryA++;
            if (penStatus == 1)
                a[memoryA][memoryB] = 1;
            else
                a[memoryA][memoryB] = 0;
        }
    }
}

void printMatrix(int a[][sizeB])
{
    for (int i = 0 ; i <= 50 -1 ; i++)
    {
        for (int j = 0 ; j <= 50 -1 ; j++)
        {
            if (a[i][j] == 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}
