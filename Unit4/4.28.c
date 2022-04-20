#include <stdio.h>
#include <math.h> 

int main(void)
{
    int type;
    int hours;
    int sale;
    float salary;
    float hourlySalary;
    float weeklySales;
    float itemPrice;

    printf("Worker type: \n");
    scanf("%d", &type);

    while (type != -1)
    {
        switch (type)
        {
            case 1: 
                printf("Manager weekly salary: \n");
                scanf("%f", &salary);
                printf("Weekly salary: %f\n\n", salary);
                break;
            
            case 2: 
                printf("Shift workers hourly salary: \n");
                scanf("%f", &hourlySalary);
                printf("How many hours worked: \n");
                scanf("%d", &hours);
                
                if (hours > 40)
                    salary = 40.0 * hourlySalary + (hours - 40) * 1.5 * hourlySalary;
                else 
                    salary = hours * hourlySalary;

                printf("Weekly salary: %f\n\n", salary);
                break;

            case 3: 
                printf("Weekly sales: \n");
                scanf("%d", &weeklySales);
                printf("Weekle salary: %.2f\n\n", 250.0 + 0.057 * weeklySales);
                break;

            case 4: 
                printf("Items price: \n");
                scanf("%f", &itemPrice);
                printf("How many items sold: \n");
                scanf("%d", &sale);
                printf("Weekly salary: %.2f\n\n", itemPrice * sale);
                break;

            default:
                printf("Incorrect type\n");
                break;
        }

        salary = 0.0;
        printf("Worker type (-1 for exit): \n");
        scanf("%d", &type);
    }

}
