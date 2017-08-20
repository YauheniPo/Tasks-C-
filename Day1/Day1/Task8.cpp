#include <stdio.h>
#include <conio.h>

void main(void)
{
	int x, sum, multi;
	printf("x = ");
	scanf("%d", &x);
	
	sum = (x % 10) + (x / 10);
	printf("\n sum = %d", sum);

	multi = (x % 10) * (x / 10);
	printf("\n multi = %d", multi);

	_getch();
}