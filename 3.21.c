#include <stdio.h>

int main(void)
{

    float hours, salaryForHour;
    float totalSalary = 0;

    printf("How much hours you worked? (-1 for exit) : \n");
    scanf("%f", &hours);

    while (hours != -1)
    {
        printf("Hourly salary: \n");
        scanf("%f", &salaryForHour);

        if ( hours <= 40 )
        {
            totalSalary = hours * salaryForHour;
            printf("Salary: %.2f\n", totalSalary);
        }
        else 
        {
            totalSalary = hours * salaryForHour + (hours - 40) * salaryForHour / 2;
            printf("Salary: %.2f\n", totalSalary);
        }

        printf("How much hours you worked? (-1 for exit) : \n");
        scanf("%f", &hours);
          
    }
}
