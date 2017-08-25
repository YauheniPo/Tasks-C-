#include <stdio.h>
#include <math.h>
#include <conio.h>

//----------------------------------------------------------------

double get_pay(double hour_rate, double work_hour)
{
	double recycling;
	recycling = work_hour - 40;
	
	//если меньше 40 часов, то отнимет по стандартному тарифу
	return hour_rate * 40 + ((recycling > 0) ? 1.5 * recycling * hour_rate : recycling * hour_rate);
}

void task13(void)
{
	puts("\n----task13----");

	double hour_rate, work_hour, pay;//отработанные часы и почасовая оплата
	char sym;
	char name[20];//имя работника

	printf("Enter hourly rate: ");
	scanf("%lf", &hour_rate);//ввод оплаты за час

	do
	{
		printf("Enter worker name: ");
		scanf("%s", &name);//ввод имени
		fflush(stdin);
		printf("Enter number of hours worked %s: ", name);
		scanf("%lf", &work_hour);//ввод отработанных часов
		fflush(stdin);

		pay = get_pay(hour_rate, work_hour);//расчет зарплаты

		printf("\npay = %.2lf $", pay);
		puts("\nTo exit press '-'");
		scanf("%c", &sym);
		fflush(stdin);
	}
	while(sym != '-');
}

//----------------------------------------------------------------

void task12(void)
{
	puts("\n----task12----");
	
	int N, sum = 0;

	printf("Enter number N: ");
	scanf("%d", &N);
	fflush(stdin);

	N = (N < 0) ? -N : N;

	int i;
	for(i = 1; sum < N; i++)
	{
		sum += i;
	}
	printf("\nnumber = %d, sum = %d", i, sum);//Вывести наименьшее из целых чисел K, для которых сумма 1+2+…+K будет больше или равна N, и саму эту сумму.
}

//----------------------------------------------------------------

double enter_number()
{
	double num;
	printf("number: ");
	scanf("%lf", &num);
	return num;
}

void task11(void)
{
	puts("\n----task11----");

	double num, total = 0.0;
	char sym;

	num = enter_number();//ввод числа

	total = num;
	do
	{
		printf("symbol(+-*/): ");
		scanf("%c", &sym);//ввод симвоа для расчета
		fflush(stdin);

		switch(sym)
		{
		case '+':
			total += enter_number();//расчет и ввод нового символа
			break;
		case '-':
			total -= enter_number();
			break;
		case '*':
			total *= enter_number();
			break;
		case '/':
			total /= enter_number();
			break;
		case '=':
			goto lbl;//выход из switch
		default:
			break;
		}
	}
	while(sym != '=');

	lbl: 
	printf("\ntotal = %lf", total);
}

//----------------------------------------------------------------

void task10(void)
{
	puts("\n----task10----");

	int num, sum = 0, prod = 1;
	
	printf("\nSum and product numbers of integer.\nEnter number: ");
	scanf("%d", &num);
	fflush(stdin);

	num = (num < 0) ? -num : num;

	for(int i = 1; i < num; i *= 10)
	{
		sum += (num / i) % 10;//сумма цифр цисла
		prod *= (num / i) % 10;//произведение цифр числа
	}

	printf("\nnumber = %d", num);
	printf("\nsum = %d", sum);
	printf("\nptod = %d", prod);
}

//----------------------------------------------------------------

void task9(void)
{
	puts("\n----task9----");

	double num, min;

	printf("\nSearch min.\nEnter number: ");
	scanf("%lf", &num);//ввод числа и оно указывает на количество следующих вводимых чисел

	min = num;

	for(int i = 1, l = num; i <= l; i++)
	{
		printf("\nnumber: ");
		scanf("%lf", &num);
		if(num < min)
		{
			min = num;//ищем минимальное среди введенных
		}
	}

	printf("\nmin = %lf", min);
}

//----------------------------------------------------------------

void task8(void)
{
	puts("\n----task8----");

	int num, n_10 = 0, n5 = 0, n25 = 0, n100 = 0, n = 0;

	printf("\nQuantity of numbers -10 / 5 / 25 / 100 / 0-exit");
	
	do
	{
		printf("\nEnter number: ");
		scanf("%d", &num);
		fflush(stdin);
		switch(num)
		{
		case -10:
			n_10++;
			break;
		case 5:
			n5++;
			break;
		case 25:
			n25++;
			break;
		case 100:
			n100++;
			break;
		default:
			break;
		}
		n++;
	}
	while(num != 0);

	n--;
	printf("\nIntroduced: %d integers,\n-10 - %d\n5 - %d\n25 - %d\n100 - %d", n, n_10, n5, n25, n100);
}

//----------------------------------------------------------------

void task7(void)
{
	puts("\n----task7----");
	
	int num, prod_even = 1, uneven_negat = 0;

	printf("\nEnter positive and negative numbers / 0-exit");

	do
	{
		printf("\nEnter number: ");
		scanf("%d", &num);
		fflush(stdin);
		
		(num > 0) ? (prod_even *= num) : (num == 0) ? uneven_negat : uneven_negat++;
	}
	while(num != 0);

	printf("\nProduct of even = %d, quantity of negative uneven = %d", prod_even, uneven_negat);
}

//----------------------------------------------------------------

void task6(void)
{
	puts("\n----task6----");

	bool b;

	for(int i = 2; i <= 10000; i++)
	{
		b = true;
		for(int j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				b = false;
				break;
			}
		}
		if(b)
		{	
			printf("%d ",i);
		}
	}
}

//----------------------------------------------------------------

void task5(void)
{
	puts("\n----task5----");

	int num, prod;

	do
	{
		printf("\nEnter number: ");
		scanf("%d", &num);
		fflush(stdin);

		num = (num < 0) ? -num : num;

		prod = 0;
		for(int i = 1; i < num; i++)
		{
			prod += i;
			if(prod == num)
			{
				printf("\nPerfect number");
			}
		}
	}
	while(num != 0);
}

//----------------------------------------------------------------

void task4(void)
{
	puts("\n----task4----");

	int numA, numB, n;

	do
	{
		printf("\nEnter number A: ");
		scanf("%d", &numA);
		fflush(stdin);
		printf("Enter number B: ");
		scanf("%d", &numB);
		fflush(stdin);

		numA = (numA < 0) ? -numA : numA;
		numB = (numB < 0) ? -numB : numB;

		if(numA > numB)
		{
			n = numA; 
			numA = numB; 
			numB = n;
		}

		for(numA += 1; numA < numB; numA++)
		{
			for(int n = 1; n <= numA; n++)
			{
				printf("%d ", numA);
			}
		}
		puts("\nExit - A = 0 / B = 0");
	}
	while(numA != 0 && numB != 0);
}

//----------------------------------------------------------------

void task3(void)
{
	puts("\n----task3----");

	double n, fact = 0, prod = 1;
	puts("Sum of factorials number");
	printf("\nEnter number: ");
	scanf("%lf", &n);
	fflush(stdin);
	
	n = (n < 0) ? -n : n;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			prod *= j;
		}
		fact += prod;
		prod = 1;
	}
	printf("\nSum of factorials = %lf", fact);
}

//----------------------------------------------------------------

void task2(void)
{
	puts("\n----task2----");

	int x, degree;
	printf("\nEnter number: ");
	scanf("%d", &x);
	fflush(stdin);
	printf("Enter degree: ");
	scanf("%d", &degree);
	fflush(stdin);

	printf("\n%d^%d = %.0lf", x, degree, pow((double)x, degree));
}

//----------------------------------------------------------------

void task1(void)
{
	puts("\n----task2----");

	int num, fact = 1;
	puts("Factorial of number");
	printf("\nEnter number: ");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++)
	{
		fact *= i; 
	}

	printf("\nFactorial of number %d = %d", num, fact);
}

void main(void)
{
	task13();
	task12();
	task11();
	task10();
	task9();
	task8();
	task7();
	task6();
	task5();
	task4();
	task3();
	task2();
	task1();

	printf("\nPress any key to exit");

	_getch();
}