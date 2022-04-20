#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

void printArray(const int a[][EXAMS]);
int min(const int a[][EXAMS]);
int max(const int a[][EXAMS]);
double average(const int a[][EXAMS]);
double averageByOne(const int a[][EXAMS]);

int main()
{
    int notes[STUDENTS][EXAMS] = { {77, 68, 86, 73}, 
                                   {96, 87, 89, 78}, 
                                   {70, 90, 86, 81} };
    printArray(notes);
    printf("Min. exam result: %d\n", min(notes));
    printf("Max. exam result: %d\n", max(notes));
    printf("(General) average exam result: %.2f\n", average(notes));
    averageByOne(notes);
    
}

void printArray(const int a[][EXAMS])
{
    for (int i = 0 ; i <= STUDENTS - 1 ; i++)
    {
        for (int j = 0 ; j <= EXAMS - 1 ; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
}

int min(const int a [][EXAMS])
{
    int min = a[0][0];
    for (int i = 0 ; i <= STUDENTS - 1 ; i++)
    {
        for (int j = 0 ; j <= EXAMS - 1 ; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
        }
    }
    return min;
}

int max(const int a[][EXAMS])
{
    int max = a[0][0];
    for (int i = 0 ; i <= STUDENTS - 1 ; i++)
    {
        for (int j = 0 ; j <= EXAMS - 1 ; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    }
    return max; 
}


double average(const int a[][EXAMS])
{
    double total = 0;
    for (int i = 0 ; i <= STUDENTS - 1 ; i++)
    {
        for (int j = 0 ; j <= EXAMS - 1 ; j++)
            total += a[i][j];
    }
    return total / (STUDENTS * EXAMS);
}

double averageByOne(const int a[][EXAMS])
{
    double total = 0;
    double average;
    for (int i = 0 ; i <= 3 - 1; i++)
    {
        printf("%d's student's average note: ", i + 1);
        for (int j = 0 ; j <= EXAMS - 1 ; j++)
        {
            total += a[i][j];
        }
        printf("%.2f\n", total / 4);
        total = 0;
    }
}
