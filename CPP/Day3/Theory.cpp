#include <stdio.h>
#include <math.h>
#include <conio.h>
//#define ZERO 0.0 -���������� �� ���������� � �� ������� ������ ����������, ���������� �������� ������������ ��������
//scanf - ��� ����� ����� �� ����������
//���� scanf �� ������ ��������, �� ���������� ���� ������, � �� ���������� ������ ������ ��������
//����� �������� ������ fflush(stdin); ����� �������� ����� ����� �� ��������� Enter ��� Speace ��� ���-�� ��� ����� ����������� �����
//const int x = 45; -������ ����� ����������������

//if(x) == if(x!=0)
//bool b = true; -������ 1 false - ������ 0 == bool b = 1 ��� 0

//sizeof(name_variable); -����� ������ ����������
//; -������ ��������
//, - s = --x, z++, d = 1; ���� ����� ��������� 1

void main(void)
{
	bool b = true;
	if(b)
	{
		printf("%d", sizeof(b));
		puts("true");
	}

	_getch();
}