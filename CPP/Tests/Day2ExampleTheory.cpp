#include <stdio.h>
#include <math.h>
#include <conio.h>

void main(void) 
{
	short int num;
	printf("short int = %lf bytes", sizeof(num)); //-число байтов переменной

	if(num)
		printf("\n%lf", (double)num);

	int i = 2;
	enum number {ONE = 1, TWO, THREE}; // последующие на +1 чем предыдущие
	switch(2) //принимает только целочисл. или char '+'
	{
	case ONE: //case const1: сравнение с константой
		puts("\nONE");
		break;
	case TWO:
		puts("\nTWO");
		break;
	case THREE:
		puts("\nTHREE");
		break;
	default:
		puts("\ndefault");
		break;
	}
	
	_getch();
}