/*
������
	Type name[size]
	�� ����� ���� ������ ������ � void-�� � �������

���������� ���� �� ����� ���������� ���������� �������� ������ � ��������,
	���� ������ �� �����, �� ������ �� ����������� �������

1)��� ������� -��� ������� ����������� ��������� �� ������ ������� �������
2)����� ������� -��� ������ �����(�������������) ���������

	1)double x[10]; ==	const int n = 10;
						double x[n];
	for(int i = 0; i < n; ++i)
	{
		scanf...
	}
	#define N 10 -����������� � ������������������� ���������(����� ������� ��������������� ����� �������)

������ ����� �������� �� ������� ������� � ������ ����� ��� ����������

x[ind] 0<=int<n
x == &x[0] == double *p -������� ����������� ���������

�������� �������
	return_type name_func(Type *,int size);
						 (Type[],int size);
	return_type name_func(Type *arr,int N) {}
						 (Type arr[],int N) {}
	return_type name_func(Type arr[2][2]);
						 (Type arr[2][2]) {}
		(Type*,int start,int end) -����� �������

const int N = 5;
int a[N]; //-����������� ������

int a[100], n; //������������������ ������
scanf("%lf",&n);

sizeof(arr) = ���������� ����� * �� ������ ���� �������
������ ������� = sizeof(arr)/sizeof(type)

	double x[N] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7}; //��������
	double y[] = {1.1,2.2,3.3}; //-�� ����� ���������� ������ �����������
	double x[N] = {1.1,2.2,3.3}; //������� ����������
	double v[N] = {0}; //��� ����� 0

	for(int i = 0; i < N; ++i)
	{
		printf("[%d] = ",i);
		scanf("%.2lf",&x[i]); //scanf("%lf",x+1);
	}
	double *p = x; // == *p = &x[0]; -scanf("%lf",p++); -������� �� 0 � ����� �������� �� 1 == scanf("%lf",p+1);


int z, a[] = {1,2,3}, *p = &x[1];
z = ++*p--;
printf(...,z,*p); -3 1

����������� ������
	Type name[Size1][Size2]; -name -����� ������ -��������� �� ���������
	
	const int N = 3, M = 2;
	double arr[N][M] = {{1.1,2.2,3.3},{4.4,5.5,6.6}};
	double arr[N][M] = {{1},{2},{3}};
	double arr[N][M] = {1,2,3,4,5,6};
	
	int ind1, ind2;
	for(ind1 = 0; ind1 < N; ++ind1)
	{
		for(ind2 = 0; ind2 < M; ++ind2)
		{
			scanf("%lf",(arr[ind1] + ind2)); //arr[2][1] == *(*(arr + 2) + 1)
		}
	}

�������� �������
	return_type name_func(Type [][M],int);
						 (Type arr[][2],int N) {}
	������������ ������
	return_type name_func(Type **arr,int n,int m) {}
						 (Type **,int,int);
*/

#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

double d = .5E-2;

void Set_arr(int arr[][3], int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < 3; ++j) {
			printf("%d", arr[i][j]);
		}
	}
}

void main() {
	const int N = 2, M = 3;
	int arr[N][M] = {{1,2,3},{4,5,6}};
	printf("%lf", d);
	Set_arr(arr, N);

	_getch();
	return;
}