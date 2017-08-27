#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void Set_number(int&x)
{
	scanf("%d",&x);
	fflush(stdin);
}
//----------------------------------------------------------------
int Get_max(int,int,int);
int Get_min(int,int,int);
void task1(void)	
{
	puts("\n----task1----");

	int x1,x2,x3,x4,x5,max1,max2,max3,min1,min2,min3;
	printf("x1=");
	Set_number(x1);
	printf("x2=");
	Set_number(x2);
	printf("x3=");
	Set_number(x3);
	printf("x4=");
	Set_number(x4);
	printf("x5=");
	Set_number(x5);

	max1 = Get_max(x1,x2,x3);
	max2 = Get_max(x2,x3,x4);
	max3 = Get_max(x3,x4,x5);
	min1 = Get_min(x1,x2,x3);
	min2 = Get_min(x2,x3,x4);
	min3 = Get_min(x3,x4,x5);

	printf("\nmax1=%d max2=%d max3=%d", max1, max2, max3);
	printf("\nmin1=%d min2=%d min3=%d", min1, min2, min3);
}
int Get_max(int x,int y,int z)
{
	return x > y ? (y > z ? x : (z > x ? z : x)) : (x > z ? y : (z > y ? z : y));
}
int Get_min(int x,int y,int z)
{
	return x < y ? (y < z ? x : (z < x ? z : x)) : (x < z ? y : (z < y ? z : y));
}
//----------------------------------------------------------------
int Get_factorial(int);
void task2(void)
{
	puts("\n----task2----");

	int x1,x2,x3,fact1,fact2,fact3,sum_fact;
	printf("x1=");
	Set_number(x1);
	fact1 = Get_factorial(x1);
	printf("%d!=%d",x1,fact1);
	printf("\nx2=");
	Set_number(x2);
	fact2 = Get_factorial(x2);
	printf("%d!=%d",x2,fact2);
	printf("\nx3=");
	Set_number(x3);
	fact3 = Get_factorial(x3);
	printf("%d!=%d",x3,fact3);

	sum_fact = fact1 + fact2 + fact3;

	printf("\nsum=%d",sum_fact);
}
int Get_factorial(int x)
{
	int fact = 1;
	x <= 0 ? x = 1 : x;
	for(int i = 1; i <= x; ++i)
	{
		fact *= i;
	}
	return fact;
}
void main(void)
{
	task1();
	task2();

	_getch();
}