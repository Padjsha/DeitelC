#include <stdio.h>
#include <math.h>

double hyp(double, double);

int main()
{
    double s1, s2;
    double x;
    
    printf("Length of side 1 : \n");
    scanf("%lf", &s1);
    
    printf("Length of side 2 : \n");
    scanf("%lf", &s2);

    x = hyp(s1, s2);

    printf("Hyp of %.2lf and %.2lf is: %.2lf\n", s1, s2, x);

}

double hyp(double a, double b)
{
    return sqrt(a * a + b * b);
}
