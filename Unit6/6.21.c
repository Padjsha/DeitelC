#include <stdio.h> //different solution here: https://github.com/lbraglia/chtp/blob/master/src/06_21.c

int seats[11] = {0};

void seated(int a[], int answer);
void yourTicket(int a);

int main()
{
    int answer;


    for (int i = 0 ; i <= 10 ; i++)
    {
        do
        {
            printf("Do you smoke?\nPress 1 if you do, 2 if you don't.  ");
            scanf("%d", &answer);
        } while (answer < 1 || answer > 2);

        seated(seats, answer);
    }
}

void seated(int a[], int b)
{
    int start, end;
    int other;

    if (b == 1)
        start = 1, end = 5, other = 2;
    else if (b == 2)
        start = 6, end = 10, other =1;
    
    int key = 0;
    int seat;
    int answer2;

    for (int i = start ; i <= end ; i++)
    {
        if (a[i] == 0)
        {
            printf("%d\t", i);
            key = 1;
        }
    }

    printf("\n");

    if (key == 1)
    {
        do
        {
            printf("Choose one\t");
            scanf("%d", &seat);
        } while (a[seat] == 1 || seat < start || seat > end);

        a[seat] = 1;
        yourTicket(seat);
    }

    else if (key == 0)
    {
        printf("Not found.\nDo you want to look other section if there is free seat?\nIf yes, press 2. 0 for exit.\n----------\n");
        scanf("%d", &answer2);
    
    if (answer2 == 2)
        seated(a, other);
    else
        printf("Have a nice day\n----------\n");
    }
}

void yourTicket(int a)
{
    printf("\n-----\nYour ticket: %d\n-----\n\n", a);
}
