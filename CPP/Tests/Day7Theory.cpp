/*
МАССИВ
	Type name[size]
	Не может быть массив ссылок и void-ов и функций

Компилятор либо на этапе компиляции сравнивает заданный размер с массивом,
	если размер не задан, то задает по заполненным ячейкам

1)имя массива -это скрытый константный указатель на первый элемент массива
2)размр массива -это всегда целая(целочисленная) константа

	1)double x[10]; ==	const int n = 10;
						double x[n];
	for(int i = 0; i < n; ++i)
	{
		scanf...
	}
	#define N 10 -разрешается с псевдодинамическими массивами(когда заранее зарезервировано число массива)

Массив может выходить за пределы массива и хранит мусор при объявлении

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

sizeof(arr) = количество ячеек * на размер типа массива
размер массива = sizeof(arr)/sizeof(type)

	double x[N] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7}; //ругается
	double y[] = {1.1,2.2,3.3}; //-на этапе компиляции размер определится
	double x[N] = {1.1,2.2,3.3}; //обнулит оставшиеся
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

МНОГОМЕРНЫЙ МАССИВ
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

void Set_number(int&x)
{
	scanf("%d", &x);
	fflush(stdin);
}
int Consider_discrim(int,int,int);
void Consider_roots(int,int,int);
void Print_result_not_roots();
void Print_result_one_root(int,int);
void Print_result_two_roots(int,int,int);

void task3(void)
{
	puts("\n----task3----");

	int a,b,c,D;
	char ch;
	double x1,x2;
	
	puts("ax^2 + bx + c = 0");
	printf("a=");
	Set_number(a);
	if(!a) {
		puts("Данный ввод некорректен для решения квадратного уравнения.");
		return;
	}
	printf("b=");
	Set_number(b);
	printf("c=");
	Set_number(c);
	if(b == 0) {
		if(c == 0) {
			puts("Данный ввод некорректен для решения квадратного уравнения.");
			return;
		}
		printf("\n%dx^2+%d=0", a, c);
	}else if(c == 0)
		printf("\n%dx^2+%dx=0", a, b);
	do {
		printf("\nПродолжить решение? (y/n): ");
		scanf("%c", &ch);
		if(ch == 'y') {
			if(a !=0 && b != 0 && c != 0) {
				printf("\nD=b^2-4*a*c=%d^2-4*%d*%d", b, a, c);
				D = Consider_discrim(a,b,c);
				printf("\nD=%d", D);
				Consider_roots(a,b,D);
				break;
			} else {
				if(b == 0) {
					puts("\nx^2+c=0");
					printf("%dx^2+%d=0", a, c);
				} else {
					puts("\nx^2+bx=0");
					printf("%dx^2+%dx=0", a, b);
				}
				D = Consider_discrim(a,b,c);
				Consider_roots(a,b,D);
				break;
			}
		}
	} while(ch != 'n');
}
int Consider_discrim(int a,int b,int c)
{
	return (int)(pow((double)b,2) - 4 * a * c);
}
void Consider_roots(int a,int b,int D)
{
	if(D < 0)
	{
		Print_result_not_roots();
	}
	else if(!D)
	{
		Print_result_one_root(a,b);
	}
	else
	{
		Print_result_two_roots(a,b,D);
	}
}
void Print_result_not_roots()
{
	puts("\nНет корней.");
}
void Print_result_one_root(int a,int b)
{
	printf("\nx = -b/2a = %lf",(-(b) / 2 * a));
}
void Print_result_two_roots(int a,int b,int D)
{
	printf("\nx1 = (-b+sqrt(D))/2a = %.2lf",((-b + sqrt((double)D)) / 2 * a));
	printf("\nx2 = (-b-sqrt(D))/2a = %.2lf",((-b - sqrt((double)D)) / 2 * a));
}
void main() {
	setlocale(LC_ALL,"Russian"); 
	srand(time(NULL));

	task3();

	_getch();
	return;
}