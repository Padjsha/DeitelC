#include <stdio.h>
#include <math.h>

float cashCalculate(float);

int main()
{
        float t1, t2, t3;
        printf("Parking time for car 1, 2 and 3: \n");
        scanf("%f%f%f", &t1, &t2, &t3);
        
        printf("%10s%10s%10s\n", "Car", "Hour", "Cash");
        printf("%10d%10.2f%10.2f\n", 1, t1, cashCalculate(t1));
        printf("%10d%10.2f%10.2f\n", 2, t2, cashCalculate(t2));
        printf("%10d%10.2f%10.2f\n", 3, t3, cashCalculate(t3));
        printf("%10s%10.2f%10.2f\n", "Total", t1+t2+t3, cashCalculate(t1) + cashCalculate(t2) + cashCalculate(t3));
}

float cashCalculate(float a)
{
    if (a <= 3)
       return 2.0;
    
    else if (a > 3 && a < 24)
       return 2.0 + (a-3) * 0.5;

    else 
       return 10.0;
}

