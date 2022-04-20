#include <stdio.h>
#include <math.h>

double int2decimal(int);

int main()
{
  int x;
  printf("Put an integer: \n");
  scanf("%d", &x);

  printf("New number: %.2f\n", int2decimal(x));

}

double int2decimal(int a)
{
  int b = floor(a);
  return b;
}
