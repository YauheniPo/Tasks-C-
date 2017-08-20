#include <stdio.h>
#include <math.h>
#include <conio.h>
//#pragma warning(disable : 4129) //скрываем уведомнение
//#pragma error(disable : 2447) //скрываем ошибку

void main()
{
	char str[100];
	printf("str=");
	//gets(ch); //ввод строки
	scanf("%s", &str); //ф-ция ввода с клавиатуры и присваивание этого значения указанной переменной
	printf("str=%s\n", str);
	puts(str); //=printf("%s\n", ch); =printf("Hello!!!\n");
		
	//fflush(stdin); //очистка буфера ввода из клавиатуры

	char ch;
	ch = getch(); //возвращает код введенного символа и не отображает символ
	printf("\nch=%c=%d\n", ch, ch); //
	putchar(ch); //=printf("%c", 'a'); =printf('a');-без \n
	
	char ch1 = 102;
	//scanf("%s", &ch2);
	printf("\nch1=%c", ch1); //f

	int v = 12, p = 4, h = 4;
	printf("\nv=%0*.*d\n", p, h, v); //0012 p-вся длина значения,h-длина десятичной части

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