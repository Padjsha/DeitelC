#include <stdio.h> //https://github.com/lbraglia/chtp/blob/master/src/05_29.c this solution is better

int biggestDivisor(int, int);

int main()
{
    int number1, number2;
    printf("Number1 and number2: \n");
    scanf("%d%d", &number1, &number2);

    printf("The biggest divisor is: %d", biggestDivisor(number1, number2));


}

int biggestDivisor(int a, int b)
{
    int smallOne = a;
    int bigOne = b;
    int biggestDivisor;

    if (b < smallOne)
    {
        smallOne = b;
        bigOne = a;
    }

    for (int i = 1 ; i <= smallOne ; i++)
    {
        if (bigOne % i == 0)
        {
            if (smallOne % i == 0)
                biggestDivisor = i;
        }
    }
    
    return biggestDivisor;
}
