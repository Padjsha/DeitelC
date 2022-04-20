#include <stdio.h>

double CtoF(double);
double FtoC(double);

int main()
{
    printf("%10s%10s%5s%10s%10s\n", "C", "F", "|", "F", "C");
    for (double i = 0.0 ; i <= 210 ; i++)
    {
        if (i <= 100)
            printf("%10.2lf%10.2lf%5s", i, CtoF(i), "|");
        else 
            printf("%20s%5s", " ", "|");

        printf("%10.2lf%10.2lf\n", i + 2, FtoC(i+2));
    }

}

double CtoF(double a)
{
    return (1.8 * a + 32);
}

double FtoC(double b)
{
    return ((100 * b - 3200) / 180);
}
