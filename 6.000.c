#include <stdio.h>
#define SIZE 20
#define POINTS 10

void print(const int a[]);
void bubble(int a[], int s1ze);
void middle(int a[], int s1ze);
void average(const int a[], int s1ze);
void mod(const int a[], int b[]);

int main()
{
    int answers[SIZE] = {1, 2, 3, 4, 8, 9 , 5, 6, 7, 8, 9, 8, 9, 2, 3, 4, 7, 1, 5, 2};
    int frequency[POINTS] = {0};

    print(answers);
    bubble(answers, SIZE);
    print(answers);
    middle(answers, SIZE);
    average(answers, SIZE);
    mod(answers, frequency);

}

void print(const int a[])
{
    for (int i = 0 ; i <= SIZE - 1 ; i ++)
        printf("%2d ", a[i]);
    
    printf("\n");
}

void bubble(int a[], int s1ze)
{
    int temp;
    for (int i = 0 ; i <= SIZE - 1 ; i++)
    {
        for (int j = 0 ; j <= SIZE - 2 ; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void middle(int a[], int s1ze)
{
    bubble(a, s1ze);
    printf("Middle of the array is: %d\n", a[s1ze/2]);
}

void average(const int a[], int s1ze)
{
    int total;
    for (int i = 0 ; i <= SIZE - 1 ; i++)
    {
        total += a[i];
    }
    printf("Average is: %.2f\n", (float) total / s1ze);
}


void mod(const int a[], int b[])
{
    int rep = 0, max = 0;

    for (int i = 0 ; i <= SIZE - 1 ; i++)
    {
        ++b[a[i]];
    }

    for (int j = 0 ; j <= POINTS - 1 ; j++)
    {
        if (b[j] > max)
        {
            max = j;
            rep = b[j];
        }
    }

    printf("Mod: %d for %d times\n", max, rep);

    for (int y = 1 ; y <= POINTS - 1 ; y++)
    {
        printf("%3d%5d ", y, b[y]);
        
        for (int x = 1 ; x <= b[y] ; x++)
            printf("*");
        
        printf("\n");
    }
    
}
