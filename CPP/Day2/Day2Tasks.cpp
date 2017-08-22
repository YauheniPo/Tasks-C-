#include <stdio.h>
#include <math.h>
#include <conio.h>
#define e	2.71828182846

void variant11(void)
{
	double z, x, y;
	printf("z = ");
	scanf("%lf", &z);
	if(z > 0)
	{
		puts("x=1/(z^2+2z)");
		x = 1 / (pow(z, 2) + 2 * z);
		y = (2 * pow(e, -3*x) - 4 * pow(x, 2)) / (log(abs(x)) + x);
		printf("y = %lf", y);
	}
	else if(z <= 0)
	{
		puts("x=1-z^3");
		x = 1 - pow(z, 3);
		y = (2 * pow(e, -3*x) - 4 * pow(x, 2)) / (log(abs(x)) + x);
		printf("y = %lf", y);
	}
	else
	{
		puts("Error");
	}
}

void main(void)
{
	variant11();

	_getch();
}