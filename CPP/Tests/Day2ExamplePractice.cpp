#include <stdio.h>
#include <math.h>
#include <conio.h>
#define e	2.71828182846

void example1(void)
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	if(x > y)
	{
		if(x > z)
		{
			printf("x = %d", x);
		}
		else
		{
			printf("z = %d", z);
		}
	}
	else 
	{
		if(y > z)
		{
			printf("y = %d", y);
		}
		else
		{
			printf("z = %d", z);
		}
	}

	printf("___________");
}

void example2(void) 
{
	double x, y, F;
	scanf("%lf%lf", &x, &y);
	if(x > 0 && x!= 2.5 && y < 0)
	{
		F = (x + tan(3.*y)) / (5 - 2 * x);
		printf("1 %lf", F);
	}
	else if(x < 0 && y > 0)
	{
		F = pow(x, 2./3) > cos(pow(y, 2)) ? pow(pow(x, 2), 1./3) : cos(pow(y, 2));
		printf("2 %lf", F);
	}
	else if(x > 0 && y > 0)
	{
		F = (0.5 * x - 2 * pow(sin(y), 2)) > pow(e, y) ? pow(e, y) : (0.5 * x - 2 * pow(sin(y), 2));
		printf("3 %lf", F);
	}
	else
	{
		printf("Error");
	}
}

void main(void)
{
	//example1();
	example2();
	
	_getch();
}