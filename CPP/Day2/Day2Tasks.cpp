#include <stdio.h>
#include <math.h>
#include <conio.h>
#define e	2.71828182846
//----------------------------------------------------------------
void task1(void)
{
	puts("----task1----");

	int x;

	printf("number x = ");
	scanf("%d", &x);

	x = (x > 0) ? x + 1 : x;

	printf("x = %d\n", x);
}
//----------------------------------------------------------------
void task2(void)
{
	puts("----task2----");

	int x;

	printf("number x = ");
	scanf("%d", &x);

	x = (!x) ? 10 : ((x % 2) ? ((x > 0) ? x + 1 : x -2) : x);

	printf("x = %d\n", x);
}
//----------------------------------------------------------------
void task3(void)
{
	puts("----task3----");

	int x, y;
	char ch;

	printf("compare number x = ");
	scanf("%d", &x);
	printf("and number y = ");
	scanf("%d", &y);

	if(x > y)
	{
		ch = '>';
	}
	else if(x == y)
	{
		ch = '=';
	}
	else
	{
		ch = '<';
	}
	printf("%d%c%d\n", x, ch, y);
}
//----------------------------------------------------------------
void task4(void)
{
	puts("----task4----");

	int x, y, z, max, sum, product;
	double average;

	printf("number x = ");
	scanf("%d", &x);
	printf("number y = ");
	scanf("%d", &y);
	printf("number z = ");
	scanf("%d", &z);

	if(x > y && x > z)
	{
		max = x;
	}
	else if(x > y && z > x)
	{
		max = z;
	}
	else
	{
		max = y;
	}

	sum = x + y + z;
	average = sum / 3.0;
	product = x * y * z;

	printf("max = %d average = %lf product = %d\n", max, average, product);
}
//----------------------------------------------------------------
void task5(void)
{
	puts("----task5----");

	int x, y, z;

	printf("number x = ");
	scanf("%d", &x);
	printf("number y = ");
	scanf("%d", &y);
	printf("number z = ");
	scanf("%d", &z);

	if(x < y && y < z) 
	{
		printf("x < y < z\n");
	}
    if(y < x && x < z) 
	{
		printf("y < x < z\n");
	}
    if(z < x && x < y) 
	{
		printf("z < x < y\n");
	}
    if(y < z && z < x)
	{
		printf("y < z < x\n");
	}
    if(z < y && y < x)
	{
		printf("z < y < x\n");
	}
    if(x == y && z > x)
	{
		printf("x = y < z\n");
	}
    if(x == z && y > x)
	{
		printf("x = z < y\n");
	}
    if(y == z && x > z)
	{
		printf("y = z < x\n");
	}
	if(x == y && z < x)
	{
		printf("z < x = y\n");
	}
    if(x == z && y < x)
	{
		printf("y < x = z\n");
	}
    if(y == z && x < z)
	{
		printf("x < y = z\n");
	}
    if(x == y && y == z)
	{
		printf("x = y = z\n");
	}
}
//----------------------------------------------------------------
void task6(void)
{
	puts("----task6----");

	int x;

	printf("number x = ");
	scanf("%d", &x);

	if(x >= 60)
	{
		puts("Perfect");
	}
	else if(x >= 30)
	{
		puts("Good");
	}
	else if(x >= 17)
	{
		puts("Satisfactory");
	}
	else
	{
		puts("Bad");
	}
}
//----------------------------------------------------------------
void task7(void)
{
	puts("----task7----");

	int x;

	printf("Month number = ");
	scanf("%d", &x);

	switch(x)
	{
	case 12:
	case 1:
	case 2:
		puts("Winter");
		break;
	case 3:
	case 4:
	case 5:
		puts("Spring");
		break;
	case 6:
	case 7:
	case 8:
		puts("Summer");
		break;
	case 9:
	case 10:
	case 11:
		puts("Autumn");
		break;
	default:
		puts("Error");
		break;
	}
}
//----------------------------------------------------------------
void task8(void)
{
	puts("----task8----");

	double A, B, C;

	printf("numbers:\nA = ");
	scanf("%lf", &A);
	printf("B = ");
	scanf("%lf", &B);
	printf("C = ");
	scanf("%lf", &C);

	if((A > B && B > C) || (A < B && B < C))
	{
		A = 2 * A;
		B = 2 * B;
		C = 2 * C;
	}
	else 
	{
		A = -A;
		B = -B;
		C = -C;
	}

	printf("A = %lf B = %lf C = %lf\n", A, B, C);
}
//----------------------------------------------------------------
void task9(void)
{
	puts("----task9----");

	double xO, yO, xA, yA, r, f;

	puts("Center of a circle");
	puts("O:");
	scanf("\n%lf", &xO);
	scanf("\n%lf", &yO);
	printf("r = ");
	scanf("%lf", &r);
	puts("Enter a point A:");
	scanf("\n%lf", &xA);
	scanf("\n%lf", &yA);

	f = pow(xO - xA, 2) + pow(yO - yA, 2);

	(f <= pow(r, 2)) ? puts("The point lies inside the circle") : puts("The point doesn't lie inside the circle");
}
//----------------------------------------------------------------
void task10(void)
{
	puts("----task10----");

	int price, part;

	printf("coints: 5000, 10000, 20000\nprice : ");
	scanf("%d", &price);

	part = price / 5000;
	switch(part)
	{
	case 3:
		puts("coins 5000 + 10000");
		break;
	case 5:
		puts("coins 5000 + 20000");
		break;
	case 6:
		puts("coins 10000 + 20000");
		break;
	default:
		puts("Not pay off");
		break;
	}
}
//----------------------------------------------------------------
void task11(void)
{
	puts("----task11----");

	int day_number;
	enum week { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

	printf("day number: ");
	scanf("%d", &day_number);

	if(day_number >= 1 && day_number <= 7)
	{
		switch(day_number)
		{
		case MONDAY:
			puts("Monday");
			break;
		case TUESDAY:
			puts("Tuesday");
			break;
		case WEDNESDAY:
			puts("Wednesday");
			break;
		case THURSDAY:
			puts("Thursday");
			break;
		case FRIDAY:
			puts("Friday");
			break;
		case SATURDAY:
			puts("Saturday");
			break;
		case SUNDAY:
			puts("Sunday");
			break;
		}
	}
	else
	{
		puts("Incorrect day number");
	}
}
//----------------------------------------------------------------
void integers1_9(int number)
{
	switch(number)
	{
	case 1:
		printf("one ");
		break;
	case 2:
		printf("two ");
		break;
	case 3:
		printf("three ");
		break;
	case 4:
		printf("four ");
		break;
	case 5:
		printf("five ");
		break;
	case 6:
		printf("six ");
		break;
	case 7:
		printf("seven ");
		break;
	case 8:
		printf("eight ");
		break;
	case 9:
		printf("nine ");
		break;
	default:
		break;
	}
}

void task12(void)
{
	puts("----task12----");

	int value, hundreds, tens, number, part_without_hundreds;

	while(1)
	{
		printf("\nEnter value [100, 999]: ");
		scanf("%d", &value);
		hundreds = value / 100;
		part_without_hundreds = value % 100;
		tens = part_without_hundreds / 10;
		number = value % 10;
		if(value >= 100 && value <= 999)
		{
			integers1_9(hundreds);
			printf("hundred ");
			if(tens >= 2){
				switch(tens)
				{
				case 2:
					printf("twenty ");
					break;
				case 3:
					printf("thirty ");
					break;
				case 4:
					printf("forty ");
					break;
				case 5:
					printf("fifty ");
					break;
				case 6:
					printf("sixty ");
					break;
				case 7:
					printf("seventy ");
					break;
				case 8:
					printf("eighty ");
					break;
				case 9:
					printf("ninety ");
					break;
				}
				integers1_9(number);
			}
			else
			{
				integers1_9(part_without_hundreds);
				switch(part_without_hundreds)
				{
				case 10:
					printf("ten");
					break;
				case 11:
					printf("eleven");
					break;
				case 12:
					printf("twelve");
					break;
				case 13:
					printf("thirteen");
					break;
				case 14:
					printf("fourteen");
					break;
				case 15:
					printf("fifteen");
					break;
				case 16:
					printf("sixteen");
					break;
				case 17:
					printf("seventeen");
					break;
				case 18:
					printf("eighteen");
					break;
				case 19:
					printf("nineteen");
					break;
				}
			}
		}
		else
		{
			puts("Incorrect value");
			break;
		}
	}
}
//----------------------------------------------------------------
void task13(void)
{
	puts("\n----task13----");

	int card, suit;

	while(1)
	{
		printf("\nEnter card number: ");
		scanf("%d", &card);
		printf("Enter card suit: ");
		scanf("%d", &suit);

		if(card >= 6 && card <= 14 && suit >=1 && suit <= 4)
		{
			switch(card)
			{
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
			case 10:
				printf("Ten ");
				break;
			case 11:
				printf("Jack ");
				break;
			case 12:
				printf("Queen ");
				break;
			case 13:
				printf("King ");
				break;
			case 14:
				printf("Ace ");
				break;
			}
			switch(suit)
			{
			case 1:
				printf("spades");
				break;
			case 2:
				printf("clubs");
				break;
			case 3:
				printf("diamonds");
				break;
			case 4:
				printf("hearts");
				break;
			}
			printf("\nEnter card=0 and suit=0 for to exit");
		}
		else if (!card && !suit)
			break;
		else
			printf("Repeat");
	}
}
//----------------------------------------------------------------
void variant11(void)
{
	puts("\n----variant11----");

	double z, x, y;

	printf("number z = ");
	scanf("%lf", &z);

	if(z > 0)
	{
		puts("x=1/(z^2+2z)");
		x = 1 / (pow(z, 2) + 2 * z);
	}
	else if(z <= 0)
	{
		puts("x=1-z^3");
		x = 1 - pow(z, 3);
	}
	else
	{
		puts("Error");
	}
	y = (2 * pow(e, -3*x) - 4 * pow(x, 2)) / (log(abs(x)) + x);
	printf("y = %lf", y);
}

void main(void)
{
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
	variant11();

	printf("\nPress any key to exit");

	_getch();
}