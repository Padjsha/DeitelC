#include <stdio.h>

int determine(float);

int main()
{
    float note;
    printf("Note: \n");
    scanf("%f", &note);

    printf("Note range: %d\n", determine(note));
}

int determine(float a)
{
    if (a >= 90 && a <= 100)
        return 4;
    
    if (a >= 80 && a <= 89)
        return 3;

    if (a >= 70 && a <= 79)
        return 2;
    
    if (a >= 60 && a <= 69)
        return 1;
    
    else
        return 0;
}
