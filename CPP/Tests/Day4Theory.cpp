#include <stdio.h>
#include <conio.h>
#include <math.h>

#include <stdlib.h> //int rand(void) -[0; 32767]
					//void srand(unsigned int) -[0; 65535]-2байта [0; 4294967295] -4байта
#include <time.h> //srand(time(NULL)); -текуща€ дата в виде целого числа
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
ѕеременна€ имеет:
	-область видимости -где доступно Type name
	-врем€ жизни -в течении какого времени переменна€ хранит свое значение

Ћќ јЋ№Ќџ≈ переменные: -определены в блоке или в функции
	-auto -спецификатор класса пам€ти -по умолчанию
	-register -только int -если частое использование, то переноситс€ в пам€ть регистра
	-static -глобальное врем€ жизни в методе или в функции (записываютс€ в оперативную)
		сохран€ет предыдущие результаты, если инициал. отсутств., то 0
	-extern -значит переменна€ ссылаетс€ на глобальную
√ЋќЅјЋ№Ќјя переменна€: -вне блока или функции. „тобы были видны в других модул€х -надо там объ€вить
	-extern -по умолчанию
	-static(const) -видимость только в исходном модуле
		если инициал. отсутств., то 0
	-const -константа
‘”Ќ ÷»»: возвращ. тип любой кроме массива и функции, номожет быть указатель на массив или ф-цию
	-static

”казатели:
	переменные:
		type *name -указывае на €чейку, котора€ хранит значение типа type
		int* pi -указывает на целую переменную
		const int* pi -указывает на целую константу
		int* const pi -указатель консанта на переменную целого типа
		const int* const pc -указатель-константа на целую константу
		int** a -указатель на адрес €чейки, который сам хранит адрес €чейки объекта в пам€ти

int a = 5;
int* p = &a; -получение адреса переменной
int* N = NULL; int* R = 0; -присваивание пустого значени€

double *px, y = 4, x = 2;
px = &x; -хранит адрес переменной x
double *py = &y; -указатель
printf("%lf", *px);
*px = *px + 2; -содержимое адреса
px++ -значение адреса мен€етс€ на размер типа и измен€етс€ значение по этому адресу
px--
px - py
px - 2;
	void m(int, int*);
	void m(int x, int*y) {
		*y = x + 1; }

——џЋ »:
	type&name = variable
	ƒолжна быть проинициализирована при объ€влении
	void m(int, int&);
	void m(int x, int&y) {
		y = x + 1; }
*/