#include <stdio.h>
#include <math.h>

int allseconds(int, int, int);

int main()
{
    int hours, minutes, seconds;
    int hours2, minutes2, seconds2;
    printf("1st time: Hour, minutes and seconds: \n");
    scanf("%d%d%d", &hours, &minutes, &seconds);

    printf("Second time: Hour, minutes and seconds: \n");
    scanf("%d%d%d", &hours2, &minutes2, &seconds2);

    int time1 = allseconds(hours, minutes, seconds);
    int time2 = allseconds(hours2, minutes2, seconds2);
    printf("First: %d seconds\nSecond: %d seconds\n", time1, time2);

    int difference = fabs(time1-time2);

    int newHours, newMinutes, newSeconds;

    if (difference >= 3600)
    {
        newHours = difference / 3600;
        difference %= 3600;
    }

    if (difference >= 60)
    {
        newMinutes = difference / 60;
        difference %= 60;
    }

    newSeconds = difference;

    printf("Time difference: %d:%d:%d\n", newHours, newMinutes, newSeconds);

}

int allseconds(int a, int b, int c)
{
    return a * 3600 + b * 60 + c;
}
