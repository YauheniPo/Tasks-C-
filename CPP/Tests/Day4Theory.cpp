#include <stdio.h>
#include <conio.h>
#include <math.h>

#include <stdlib.h> //int rand(void) -[0; 32767]
					//void srand(unsigned int) -[0; 65535]-2����� [0; 4294967295] -4�����
#include <time.h> //srand(time(NULL)); -������� ���� � ���� ������ �����
					//[a; b]
					//a + rand()%(b-a+1)

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

void Max(void)
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

void main(void)
{
	Max();

	double x = 67, y = 9;
	double&lnk_y = y;
	lnk_y++;
	double *addrs_x = &x;
	printf("\n%.2lf\n", *addrs_x);
	*addrs_x=*addrs_x+3;
	printf("%.2lf\n", *addrs_x);
	addrs_x = addrs_x - 1;
	printf("%.2lf\n", x);
	printf("%.2lf\n", lnk_y);
	addrs_x++;
	addrs_x = NULL;
	printf("%.2lf\n", x);
	lnk_y = 0;
	printf("%.2lf\n", lnk_y);
	printf("%.2lf\n", y);
	_getch();
}

/*
���������� �����:
	-������� ��������� -��� �������� Type name
	-����� ����� -� ������� ������ ������� ���������� ������ ���� ��������

��������� ����������: -���������� � ����� ��� � �������
	-auto -������������ ������ ������ -�� ���������
	-register -������ int -���� ������ �������������, �� ����������� � ������ ��������
	-static -���������� ����� ����� � ������ ��� � ������� (������������ � �����������)
		��������� ���������� ����������, ���� �������. ��������., �� 0
	-extern -������ ���������� ��������� �� ����������
���������� ����������: -��� ����� ��� �������. ����� ���� ����� � ������ ������� -���� ��� ��������
	-extern -�� ���������
	-static(const) -��������� ������ � �������� ������
		���� �������. ��������., �� 0
	-const -���������
�������: �������. ��� ����� ����� ������� � �������, ������� ���� ��������� �� ������ ��� �-���
	-static

���������:
	����������:
		type *name -�������� �� ������, ������� ������ �������� ���� type
		int* pi -��������� �� ����� ����������
		const int* pi -��������� �� ����� ���������
		int* const pi -��������� �������� �� ���������� ������ ����
		const int* const pc -���������-��������� �� ����� ���������
		int** a -��������� �� ����� ������, ������� ��� ������ ����� ������ ������� � ������

int a = 5;
int* p = &a; -��������� ������ ����������
int* N = NULL; int* R = 0; -������������ ������� ��������

double *px, y = 4, x = 2;
px = &x; -������ ����� ���������� x
double *py = &y; -���������
printf("%lf", *px);
*px = *px + 2; -���������� ������
px++ -�������� ������ �������� �� ������ ���� � ���������� �������� �� ����� ������
px--
px - py
px - 2;
	void m(int, int*);
	void m(int x, int*y) {
		*y = x + 1; }

������:
	type&name = variable
	������ ���� ������������������� ��� ����������
	void m(int, int&);
	void m(int x, int&y) {
		y = x + 1; }
*/