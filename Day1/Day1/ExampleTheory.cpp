#include <stdio.h>
#include <math.h>
#include <conio.h>
//#pragma warning(disable : 4129) //�������� �����������
//#pragma error(disable : 2447) //�������� ������

void main()
{
	char ch[100];
	printf("ch=");
	//gets(ch); //���� ������
	scanf("%s", &ch);
	printf("ch=%s\n", ch);

	int v = 12, p = 4, h = 4;
	printf("v=%0*.*d\n", p, h, v); //0012 p-��� ����� ��������,h-����� ���������� �����
		
	//fflush(stdin); //������� ������ ����� �� ����������

	char ch2;
	ch2 = getch(); //���������� ��� ���������� ������� � �� ���������� ������
	printf("\nch2=%c=%d", ch2, ch2);
	//scanf("%s", &ch2);
	//printf("\nch2=%c", ch2);
		
	int a, n, i, k = 0;
	double s = 0;
	printf("\nEnter n - ");
	scanf("%d", &n); //�-��� ����� � ���������� � ������������ ����� �������� ��������� ����������
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