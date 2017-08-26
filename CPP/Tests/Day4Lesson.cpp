#include <stdio.h>
#include <conio.h>

int Set_number()
{
	int x;
	scanf("%d", &x);
	fflush(stdin);
	return x;
}

int Find_max(int x, int y, int z)
{
	return x > y ? (y > z ? x : (z > x ? z : x)) : (x > z ? y : (z > y ? z : y));
}

void main(void)
{
	int x1, x2, x3, x4, x5, max1, max2, max3, max1_2_3;
	x1 = Set_number();
	x2 = Set_number();
	x3 = Set_number();
	x4 = Set_number();
	x5 = Set_number();

	max1 = Find_max(x1, x2, x3);
	max2 = Find_max(x2, x3, x4);
	max3 = Find_max(x3, x4, x5);
	max1_2_3 = Find_max(max1, max2, max3);

	printf("\nmax1=%d max2=%d max3=%d MAX=%d", max1, max2, max3, max1_2_3);

	_getch();
}