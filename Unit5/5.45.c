#include <stdio.h>

void gps(void);

static float a1, a2, b1, b2;

int main()
{

    

    printf("Coordinates of first point: \n");
    scanf("%f%f", &a1, &a2);

    printf("Coordinates of second point: \n");
    scanf("%f%f", &b1, &b2);

    gps();


}

void gps(void)
{
    printf("Gps: (%.2f,%.2f)\n", b1 - a1, b2 - a2);    
}
