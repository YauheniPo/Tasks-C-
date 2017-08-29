#include <stdio.h>
#include <conio.h>
#include <math.h>

#include <stdlib.h> //int rand(void) -[0; 32767]
					//void srand(unsigned int) -[0; 65535]-2байта [0; 4294967295] -4байта
#include <time.h> //srand(time(NULL)); -текущая дата в виде целого числа
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
Переменная имеет:
	-область видимости -где доступно Type name
	-время жизни -в течении какого времени переменная хранит свое значение

ЛОКАЛЬНЫЕ переменные: -определены в блоке или в функции
	-auto -спецификатор класса памяти -по умолчанию
	-register -только int -если частое использование, то переносится в память регистра
	-static -глобальное время жизни в методе или в функции (записываются в оперативную)
		сохраняет предыдущие результаты, если инициал. отсутств., то 0
	-extern -значит переменная ссылается на глобальную
ГЛОБАЛЬНАЯ переменная: -вне блока или функции. Чтобы были видны в других модулях -надо там объявить
	-extern -по умолчанию
	-static(const) -видимость только в исходном модуле
		если инициал. отсутств., то 0
	-const -константа
ФУНКЦИИ: возвращ. тип любой кроме массива и функции, но может быть указатель на массив или ф-цию
	-static
СТЕК
	аргументы, адрес возврата, адреса вложенных кадров(локальные переменные вызывающего метода), локальные переменные, сохраненные регистры процессора
(во всех функциях return подставляется компилятором при void, чтобы выйти с функции)

УКАЗАТЕЛИ: type *name -выделяется место как под int. Указатель содержит адрес переменной сообв. типа, либо 0/NULL
	переменные:
		type *name -указывае на ячейку, которая хранит значение типа type
		int *pi -указывает на целую переменную
		char *pc
		const int *pi -указывает на целую константу -запрещено переопределять константу
		int *const pi -указатель консанта на переменную целого типа -запрещено переопределять указатель
		const int *const pc -указатель-константа на целую константу
		int **a -указатель на адрес ячейки, который сам хранит адрес ячейки объекта в памяти
	sizeof(pi)==sizeof(pc)==4
	sizeof(*pi)==sizeof(int)

	char *pc=(char*)0xB800 0000;
	int *N = NULL; int *R = 0;
Разность указателей -это разность их значений,деленная на размер типа в байтах
Сумма указателей нодопустима

int a = 5;
int* p = &a; -получение адреса переменной
int* N = NULL; int* R = 0; -присваивание пустого значения

double *px, y = 4, x = 2;
px = &x; -хранит адрес переменной x
double *py = &y; -указатель
printf("%lf", *px);
*px = *px + 2; -содержимое адреса
px++ -значение адреса меняется на размер типа и изменяется значение по этому адресу
px--
px - py
px - 2;
	void m(int, int*);
		m(x,&y);
	void m(int x, int*y) {
		*y = x + 1; }

ССЫЛКИ: -должна быть сразу инициализирована и только переменной
const -по умолчанию
	type&name = variable
	Должна быть проинициализирована при объявлении
	void m(int, int&);
	void m(int x, int&y) {
		y = x + 1; }
	
VOID: -определяет адрес некоторого объекта но не содержит инф. о типе объекта
	
void *pv;
sifeof(*pv)==illegal indirection
sizeof(*(Type*)pv)==sizeof(Type)
*/

//вопросы:
// -адреса вложенных кадров
// -заполнение по строчкам или сразу, а отработка по строчкам
// -с адресом возврата связан return или нет
// -разность указателей