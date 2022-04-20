#include <stdio.h>
#include <math.h>

int main()
{
	int sayac, toplam = 0;

	for ( int sayac = 1 ; sayac <= 99 ; sayac += 2)
	{
		toplam += sayac;
	}
	printf("Toplam: %d", toplam);
}
