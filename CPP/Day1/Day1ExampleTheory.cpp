#include <stdio.h>
#include <math.h>
#include <conio.h>
//#pragma warning(disable : 4129) //�������� �����������
//#pragma error(disable : 2447) //�������� ������

void main()
{
	char str[100];
	printf("str=");
	//gets(ch); //���� ������
	scanf("%s", &str); //�-��� ����� � ���������� � ������������ ����� �������� ��������� ����������, �� 8-� �������� ��������, ����� ������ ��� Enter
	printf("str=%s\n", str);
	puts(str); //=printf("%s\n", ch); =printf("Hello!!!\n");
		
	//fflush(stdin); //������� ������ ����� �� ����������

	char ch;
	ch = getch(); //���������� ��� ���������� ������� � �� ���������� ������
	printf("\nch=%c=%d\n", ch, ch); //
	putchar(ch); //=printf("%c", 'a'); =printf('a');-��� \n
	
	char ch1 = 102;
	//scanf("%�", &ch1); //Enter f -> ch1 = 102;
	printf("\nch1=%c", ch1); //f

	int v = 12, p = 4, h = 4;
	printf("\nv=%*.*d\n", p, h, v); //0012 p-��� ����� ��������,h-����� ���������� �����(�����������)
	printf("%10.2lf"); //10 �������� �����
	printf("%10d\n", 123); //10 �������� �� �����, %-10d -10 �������� �����

	int a, n, i, k = 0;
	double s = 0;
	printf("\nEnter n - ");
	scanf("%d", &n);
	printf("n = %d", n);
	for (i = 1; i <= n; i++) 
	{
		printf("\nEnter a - ");
		scanf("%d", &a);
		printf("a = %d", a);
		s += a;
		k++;
	}
	s = s/k;
	printf("\nSr.arifm = %lf", s);

	_getch();
}