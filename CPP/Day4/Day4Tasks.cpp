#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

void Set_number(int&x)
{
	scanf("%d",&x);
	fflush(stdin);
}
void Clear_window(void)
{
	system("pause");
	system("cls");
}
//----------------------------------------------------------------
int Get_max(int,int,int);
int Get_min(int,int,int);

void task1(void)	
{
	puts("\n----task1----");

	int x1,x2,x3,x4,x5,max1,max2,max3,min1,min2,min3;
	printf("x1=");
	Set_number(x1);
	printf("x2=");
	Set_number(x2);
	printf("x3=");
	Set_number(x3);
	printf("x4=");
	Set_number(x4);
	printf("x5=");
	Set_number(x5);

	max1 = Get_max(x1,x2,x3);
	max2 = Get_max(x2,x3,x4);
	max3 = Get_max(x3,x4,x5);
	min1 = Get_min(x1,x2,x3);
	min2 = Get_min(x2,x3,x4);
	min3 = Get_min(x3,x4,x5);

	printf("\nmax1=%d max2=%d max3=%d", max1, max2, max3);
	printf("\nmin1=%d min2=%d min3=%d", min1, min2, min3);
}
int Get_max(int x,int y,int z)
{
	int max = x;
	if(x < y)
	{
		max = y;
	}
	if(x < z)
	{
		max = z;
	}
	return max;
}
int Get_min(int x,int y,int z)
{
	int min = x;
	if(y < x)
	{
		min = y;
	}
	if(z < x)
	{
		min = z;
	}
	return min;
}
//----------------------------------------------------------------
int Get_factorial(int);

void task2(void)
{
	puts("\n----task2----");

	int x1,x2,x3,fact1,fact2,fact3,sum_fact;
	printf("x1=");
	Set_number(x1);
	fact1 = Get_factorial(x1);
	printf("%d!=%d",x1,fact1);
	printf("\nx2=");
	Set_number(x2);
	fact2 = Get_factorial(x2);
	printf("%d!=%d",x2,fact2);
	printf("\nx3=");
	Set_number(x3);
	fact3 = Get_factorial(x3);
	printf("%d!=%d",x3,fact3);

	sum_fact = fact1 + fact2 + fact3;

	printf("\nsum=%d",sum_fact);
}
int Get_factorial(int x)
{
	int fact = 1;
	x <= 0 ? x = 1 : x;
	for(int i = 1; i <= x; ++i)
	{
		fact *= i;
	}
	return fact;
}
//----------------------------------------------------------------
int Consider_discrim(int,int,int);
void Consider_roots(int,int,int,double&,double&);
void Print_result_not_roots();
void Result_two_roots(int,int,int,double&,double&);

void task3(void)
{
	puts("\n----task3----");

	int a,b,c,D;
	char ch;
	double x1 = 0, x2 = 0;
	
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
				Consider_roots(a,b,D,x1,x2);
				puts("\nx = (-b+-sqrt(D))/2a = %.2lf");
				printf("\nx1 = %.2lf", x1);
				printf("\nx2 = %.2lf", x2);
				break;
			} else {
				if(b == 0) {
					puts("\nx^2+c=0");
					printf("\nx=+-sqrt(%d)", c);
					x1 = sqrt((double)c);
					x2 = -sqrt((double)c);
				} else {
					puts("\nx^2+bx=0");
					printf("\nx(%dx-%d)=0", a, b);
					x1 = 0;
					x2 = (double)a/b;
				}
				printf("\nx1 = %.2lf", x1);
				printf("\nx2 = %.2lf", x2);
				break;
			}
		}
	} while(ch != 'n');
}
int Consider_discrim(int a,int b,int c)
{
	return (int)(pow((double)b,2) - 4 * a * c);
}
void Consider_roots(int a,int b,int D,double &x1, double &x2)
{
	if(D < 0)
	{
		Print_result_not_roots();
	}
	else
	{
		Result_two_roots(a,b,D,x1,x2);
	}
}
void Print_result_not_roots()
{
	puts("\nНет корней.");
}
void Result_two_roots(int a,int b,int D, double &x1, double &x2)
{
	x1 = (-b + sqrt((double)D)) / (2 * a);
	x2 = (-b - sqrt((double)D)) / (2 * a);
}
//----------------------------------------------------------------
void Get_answer(int,int,double&);

void task4(void)
{
	puts("\n----task4----");

	int n,x;
	double y = 1;
	printf("Enter variable x = ");
	Set_number(x);
	printf("Enter power n = ");
	Set_number(n);
	Get_answer(x,n,y);
}
void Get_answer(int x,int degree,double&y)
{
	if(!degree)
	{
		y = 1;
	}
	else
	{
		if(degree > 0)
		{
			for(int i = 1; i <= degree; ++i)
			{
				y *= x;
			}
			printf("\n%d^%d = %lf", x, degree, y);
		}
		else
		{
			if(!x)
			{
				printf("Error");
			}
			else
			{
				for(int i = 1; i <= -degree; ++i)
				{
					y *= x;
				}
				y = 1.0 / y;
				printf("\n%d^%d = %lf", x, degree, y);
			}
		}
	}
}
//----------------------------------------------------------------
double Get_division(int,int);

void task5(void)
{
	puts("\n----task5----");

	int x,y;
	double div;
	printf("Enter x = ");
	Set_number(x);
	printf("Enter y = ");
	Set_number(y);

	div = Get_division(x,y);
	printf("Division x/y: %lf",div);
}
double Get_division(int x,int y)
{
	if(!y)
	{
		x = 0;
		++y;
	}
	return x / (double)y;
}
//----------------------------------------------------------------
int Check_for_simple(int);
void Print_simple(int,int);

void task6(void)
{
	puts("\n----task6----");

	int x;
	printf("Enter x = ");
	Set_number(x);

	!Check_for_simple(x) ? puts("Simple number") : puts("Not simple number");;
	Print_simple(1,1000);
}
int Check_for_simple(int x)
{
	int b = 0;
	for(int i = 2; i <= x/2; ++i)
	{
		if(!((x) % i))
		{
			++b;
		}
	}
	return b;
}
void Print_simple(int x,int y)
{
	do
	{
		int b = 0;
		for(int i = 2; i <= x/2; ++i)
		{
			if(!((x) % i))
			{
				++b;
			}
		}
		if(!b)
		{
			printf("%d ",x);
		}
		++x;
	}
	while(x < y); 
}
//----------------------------------------------------------------
bool Check_for_perfect(int);
void Print_perfect(int);

void task7(void)
{
	puts("\n----task7----");

	int x;
	printf("Enter x = ");
	Set_number(x);
	
	!Check_for_perfect(x) ? printf("Perfect number\n") : printf("Not perfect number\n");
	Print_perfect(1000);
}
bool Check_for_perfect(int x)
{
	int sum = 0;
	bool b = true;
	for(int i = 1; i <= x/2; ++i)
	{
		if(!(x % i))
		{
			sum += i;
		}
	}
	if(sum == x)
		{
			b = false;
		}
	return b;
}
void Print_perfect(int x)
{
	int n = 2;
	do
	{
		int sum = 1;
		for(int i = 2; i <= n/2; ++i)
		{
			if(!(n % i))
			{
				sum += i;
			}
		}
		if(sum == n)
		{
			printf("%d ",n);
		}
		++n;
	}
	while(n <= x);
}
//----------------------------------------------------------------
void Swap(int&);

void task8(void)
{
	puts("\n----task8----");

	int x;	
	printf("Enter x (_ _ _ ...) = ");
	Set_number(x);

	Swap(x);
	printf("%d",x);
}
void Swap(int&x)
{
	int x_swap = 0,num;
	for(int i = 10, n = 0; pow((double)i,n) <= x; ++n)
	{
		num = (int)(x / pow((double)i,n)) % i;
		x_swap = x_swap * 10 + num;
	}
	x = x_swap;
}
//----------------------------------------------------------------
void Set_variables(int*,double*);

void task9(void)
{
	puts("\n----task9----");

	int num;
	double var;

	Set_variables(&num,&var);

	printf("Integer: %d",num);
	printf("\nDouble: %lf",var);
}
void Set_variables(int *num,double *var)
{
	printf("Enter integer: ");
	scanf("%d",num);
	fflush(stdin);
	printf("Enter double: ");
	scanf("%lf",var);
	fflush(stdin);
}
//----------------------------------------------------------------
void Consider(int&,int&,int&);

void task10(void)
{
	puts("\n----task10----");
	
	int a,b,c;	
	printf("Enter a = ");
	Set_number(a);
	printf("Enter b = ");
	Set_number(b);
	printf("Enter c = ");
	Set_number(c);

	Consider(a,b,c);
	printf("a = a+b+c-(a*a) = %d",a);
	printf("\nb = a*a+b*b-c*c = %d",b);
	printf("\nc = a*b*c = %d",c);
}
void Consider(int&a,int&b,int&c)
{
	int a1,b1,c1;
	a1 = a+b+c-(a*a);
	b1 = a*a+b*b-c*c;
	c1 = a*b*c;
	a = a1;
	b = b1;
	c = c1;
}
//----------------------------------------------------------------
void Swap_numbers_lnk(int&,int&);
void Swap_numbers_pointer(int*,int*);

void task11(void)
{
	puts("\n----task11----");

	int x,y;
	printf("Enter x = ");
	Set_number(x);
	printf("Enter y = ");
	Set_number(y);

	Swap_numbers_lnk(x,y);

	printf("x = %d, y = %d",x,y);

	Swap_numbers_pointer(&x,&y);

	printf("\nx = %d, y = %d",x,y);
}
void Swap_numbers_lnk(int&x,int&y)
{
	x = x - y;
	y = x + y;
	x = y - x;
}
void Swap_numbers_pointer(int *x,int *y)
{
	*x = *x - *y;
	*y = *x + *y;
	*x = *y - *x;
}
//----------------------------------------------------------------
int Fibonacci_number(int);
void Print_fibonacci(int);

void task12(void)
{
	puts("\n----task12----");

	int f = Fibonacci_number(7);
	printf("\nseventh fibonacci number = %d\n",f);

	int capacity = 50;
	Print_fibonacci(capacity);
}
int Fibonacci_number(int x)
{
	if(x == 1 || !x)
		return 1;
	return Fibonacci_number(x-1) + Fibonacci_number(x-2);
}
void Print_fibonacci(int cap)
{
	static unsigned long int fib = 0, first = 0, second = 1;
	static int n = 0;
	if(n <= 1)
	{
		fib = n;
	}
	else
	{
		fib = first + second;
		first = second;
		second = fib;
	}
	printf("%lu ",fib);
	if(n <= cap)
	{
		++n;
		Print_fibonacci(cap);
	}
}
//----------------------------------------------------------------
int Consider_sum_num(int);

void task13(void)
{
	puts("\n----task13----");

	int num;
	printf("\nEnter number: ");
	Set_number(num);

	num = Consider_sum_num(num);
	printf("Sum num: %d",num);
}
int Consider_sum_num(int num)
{
	static int x = num,n = 0;
	static int x_swap = 0,i = 10;
	
	n = num % i;
	x_swap = x_swap * 10 + n;
	
	return x_swap < x ? Consider_sum_num(num / 10) : x_swap;
}
//----------------------------------------------------------------
int Max_common_divider(int,int);

void task14(void)
{
	puts("\n----task14----");

	int x,y,div;
	printf("\nEnter x: ");
	Set_number(x);
	printf("\nEnter y: ");
	Set_number(y);

	div = x <= y ? Max_common_divider(x,y) : Max_common_divider(y,x);

	printf("Max common divider = %d",div);
}
int Max_common_divider(int x,int y)
{
	static int i = 2, div = 1;
	
	if(!(x % i) && !(y % i))
	{
		div = i;
	}
	++i;
	return i <= x ? Max_common_divider(x,y) : div;
}	
//----------------------------------------------------------------
void Game_guess_number(int,int);
void Print_info(int,int);
void Repeat_input(int,int,int&);

void task15(void)
{
	puts("\n----task15----");

	int a,b;
	printf("Start number: ");
	Set_number(a);
	printf("End number: ");
	Set_number(b);

	Game_guess_number(a,b);
}
void Game_guess_number(int a,int b)
{
	int num = a + rand() % (b - a +1);
	printf("\n%d",num);
	int my_num;
	Print_info(a,b);
	Set_number(my_num);
	while(num != my_num)
	{
		if(my_num > num)
		{
			b = (my_num >= b) ? b : my_num;
			Repeat_input(a,b,my_num);
		}
		else
		{
			a = (my_num <= a) ? a : my_num;
			Repeat_input(a,b,my_num);
		}
	}
	printf("\nYou Win!!!");
}
void Print_info(int a,int b)
{	
	printf("\nEnter number [%d, %d]: ",a,b);
}
void Repeat_input(int a,int b,int&my_num)
{
	Print_info(a,b);
	Set_number(my_num);
}
//----------------------------------------------------------------
void Check_table_multi();
void Print_table_multi();

void task16(void)
{
	puts("\n----task16----");

	Check_table_multi();
}
void Check_table_multi()
{
	int x,y,multi,my_multi,n = 1;
	x = 1 + rand() % (9 - 1 + 1);
	y = 1 + rand() % (9 - 1 + 1);
	multi = x * y;
	do
	{		
		printf("How much %d * %d: ",x,y);
		Set_number(my_multi);
		if(my_multi == multi)
		{
			printf("Right!");
			break;
		}
		else
		{
			if(n % 3 == 0)
			{
				Print_table_multi();
				//n = 0;
			}
			else
			{
				printf("Try again\n");
			}
			Clear_window();
		}
		++n;
	}
	while(true);
}
void Print_table_multi()
{
	Clear_window();
	printf("      1   2   3   4   5   6   7   8   9\n\n");
	for(int i = 1; i <=9; ++i)
	{
		printf("%-3d ",i);
		for(int j = 1; j <= 9; ++j)
		{
			printf("%3d ",i*j);
		}
		printf("\n");
	}
}
void main(void) {
	setlocale(LC_ALL,"Russian"); 
	srand(time(NULL));

	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	task10();
	task11();
	task12();
	task13();
	task14();
	task15();
	task16();

	printf("\nPress any key to exit");

	_getch();
}