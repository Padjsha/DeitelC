#include <stdio.h>

int main(void) 
{
    float r;
    printf("R: \n");
    scanf("%f", &r);    

    printf("R: %f\nCircumference: %.2f\nArea: %.2f\n", r, 2*3.14159*r, 2*r*r);
}
