#include <stdio.h>
#include <conio.h>
#include <math.h>

#include <stdlib.h> //int rand(void) -[0; 32767]
					//void srand(unsigned int) -[0; 65535]-2����� [0; 4294967295] -4�����
#include <time.h> //srand(time(NULL)); -������� ���� � ���� ������ �����
					//[a; b]
					//a + rand()%(b-a+1)

void Set_number(int &x)
{
	scanf("%d", &x);
	fflush(stdin);
}

int Find_max(int x, int y, int z)
{
	int max = x;
	if(max < y)
	{
		max = y;
	}
	if(max < z)
	{
		max = z;
	}
	return max;
}

void Max_number(int *x1,int *x2,int *x3,int *x4,int *x5,int *max1,int *max2, int *max3)
{
	*max1 = Find_max(*x1, *x2, *x3);
	*max2 = Find_max(*x2, *x3, *x4);
	*max3 = Find_max(*x3, *x4, *x5);
}

void main(void)
{
	/*int x1, x2, x3, x4, x5, max1, max2, max3, max1_2_3;
	printf("\nEnter number: ");
	Set_number(x1);
	printf("\nEnter number: ");
	Set_number(x2);
	printf("\nEnter number: ");
	Set_number(x3);
	printf("\nEnter number: ");
	Set_number(x4);
	printf("\nEnter number: ");
	Set_number(x5);

	Max_number(&x1,&x2,&x3,&x4,&x5,&max1,&max2,&max3);
	max1_2_3 = Find_max(max1, max2, max3);

	printf("\nmax1=%d max2=%d max3=%d MAX=%d\n", max1, max2, max3, max1_2_3);*/



	double x = 67.5, y = 3;
	double *px = &x;
	double *py = &y;
	*px = px - py;
	double &lnk_y = y;
	printf("\n%lf",lnk_y);
	//++lnk_y;
	printf("\n%lf",y);
	double *addrs_x = &x;
	printf("\n%.2lf\n", *addrs_x);
	*addrs_x=*addrs_x+3;
	printf("%.2lf\n", *addrs_x);
	printf("%d\n", addrs_x);
	addrs_x = addrs_x - 1;
	printf("%d\n", addrs_x);
	printf("%.2lf\n", x);
	printf("%.2lf\n", lnk_y);
	addrs_x++;
	addrs_x = NULL;
	printf("%.2lf\n", x);
	lnk_y = 0;
	printf("%.2lf\n", lnk_y);
	printf("%.2lf\n", y);
	
	printf("%d\n", addrs_x);
	
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
�������: �������. ��� ����� ����� ������� � �������, �� ����� ���� ��������� �� ������ ��� �-���
	-static
����
	���������, ����� ��������, ������ ��������� ������(��������� ���������� ����������� ������), ��������� ����������, ����������� �������� ����������
(�� ���� �������� return ������������� ������������ ��� void, ����� ����� � �������)

���������: type *name -���������� ����� ��� ��� int. ��������� �������� ����� ���������� �����. ����, ���� 0/NULL
	����������:
		type *name -�������� �� ������, ������� ������ �������� ���� type
		int *pi -��������� �� ����� ����������
		char *pc
		const int *pi -��������� �� ����� ��������� -��������� �������������� ���������
		int *const pi -��������� �������� �� ���������� ������ ���� -��������� �������������� ���������
		const int *const pc -���������-��������� �� ����� ���������
		int **a -��������� �� ����� ������, ������� ��� ������ ����� ������ ������� � ������
	sizeof(pi)==sizeof(pc)==4
	sizeof(*pi)==sizeof(int)

	char *pc=(char*)0xB800 0000;
	int *N = NULL; int *R = 0;
�������� ���������� -��� �������� �� ��������,�������� �� ������ ���� � ������
����� ���������� �����������

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
		m(x,&y);
	void m(int x, int*y) {
		*y = x + 1; }

������: -������ ���� ����� ���������������� � ������ ����������
const -�� ���������
	type&name = variable
	������ ���� ������������������� ��� ����������
	void m(int, int&);
	void m(int x, int&y) {
		y = x + 1; }
	
VOID: -���������� ����� ���������� ������� �� �� �������� ���. � ���� �������
	
void *pv;
sifeof(*pv)==illegal indirection
sizeof(*(Type*)pv)==sizeof(Type)
*/

//�������:
// -������ ��������� ������
// -���������� �� �������� ��� �����, � ��������� �� ��������
// -� ������� �������� ������ return ��� ���
// -�������� ����������