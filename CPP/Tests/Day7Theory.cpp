/*
ћј——»¬
	Type name[size]
	Ќе может быть массив ссылок и void-ов и функций

 омпил€тор либо на этапе компил€ции сравнивает заданный размер с массивом,
	если размер не задан, то задает по заполненным €чейкам

1)им€ массива -это скрытый константный указатель на первый элемент массива
2)размр массива -это всегда цела€(целочисленна€) константа

	1)double x[10]; ==	const int n = 10;
						double x[n];
	for(int i = 0; i < n; ++i)
	{
		scanf...
	}
	#define N 10 -разрешаетс€ с псевдодинамическими массивами(когда заранее зарезервировано число массива)

ћассив может выходить за пределы массива и хранит мусор при объ€влении

x[ind] 0<=int<n
x == &x[0] == double *p -скрытый константный указатель

передача массива
	return_type name_func(Type *,int size);
						 (Type[],int size);
	return_type name_func(Type *arr,int N) {}
						 (Type arr[],int N) {}
	return_type name_func(Type arr[2][2]);
						 (Type arr[2][2]) {}
		(Type*,int start,int end) -часть массива

const int N = 5;
int a[N]; //-статический массив

int a[100], n; //псевдодинамический массив
scanf("%lf",&n);

sizeof(arr) = количество €чеек * на размер типа массива
размер массива = sizeof(arr)/sizeof(type)

	double x[N] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7}; //ругаетс€
	double y[] = {1.1,2.2,3.3}; //-на этапе компил€ции размер определитс€
	double x[N] = {1.1,2.2,3.3}; //обнулит оставшиес€
	double v[N] = {0}; //все будут 0

	for(int i = 0; i < N; ++i)
	{
		printf("[%d] = ",i);
		scanf("%.2lf",&x[i]); //scanf("%lf",x+1);
	}
	double *p = x; // == *p = &x[0]; -scanf("%lf",p++); -сначала на 0 и потом перейдет на 1 == scanf("%lf",p+1);


int z, a[] = {1,2,3}, *p = &x[1];
z = ++*p--;
printf(...,z,*p); -3 1

ћЌќ√ќћ≈–Ќџ… ћј——»¬
	Type name[Size1][Size2]; -name -адрес адреса -указатель на указатель
	
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

передача массива
	return_type name_func(Type [][M],int);
						 (Type arr[][2],int N) {}
	динамический массив
	return_type name_func(Type **arr,int n,int m) {}
						 (Type **,int,int);
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

void main() {
	char str[100];
	*str = 'q';
	*(str + 1) = '\0';
	puts(str);
	char ch = '2';
	int n = ch - '0';
	printf("%d", n);
	*(str + 1) = 'w';
	puts(str);
	
	char *s;
	s = gets(str);
	puts(s);
	puts(str);
	

	_getch();
	return;
}