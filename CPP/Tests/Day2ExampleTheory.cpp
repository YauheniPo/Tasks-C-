#include <stdio.h>
#include <math.h>
#include <conio.h>

void main(void) 
{
	short int num;
	printf("short int = %lf bytes", sizeof(num)); //-����� ������ ����������

	if(num)
		printf("\n%lf", (double)num);

	int i = 2;
	enum number {ONE = 1, TWO, THREE}; // ����������� �� +1 ��� ����������
	switch(2) //��������� ������ ��������. ��� char '+'
	{
	case ONE: //case const1: ��������� � ����������
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