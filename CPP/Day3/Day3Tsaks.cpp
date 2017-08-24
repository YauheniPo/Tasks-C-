#include <stdio.h>
#include <math.h>
#include <conio.h>

double get_pay(double hour_rate, double work_hour)
{
	double recycling;
	recycling = work_hour - 40;
	
	return hour_rate * 40 + ((recycling > 0) ? 1.5 * recycling * hour_rate : recycling * hour_rate);
}

void task13(void)
{
	puts("\n----task13----");

	double hour_rate, work_hour, pay;
	char sym;
	char name[20];

	printf("Enter hourly rate: ");
	scanf("%lf", &hour_rate);
	fflush(stdin);

	do
	{
		printf("Enter worker name: ");
		scanf("%s", &name);
		fflush(stdin);
		printf("Enter number of hours worked %s: ", name);
		scanf("%lf", &work_hour);
		fflush(stdin);
		pay = get_pay(hour_rate, work_hour);
		printf("\npay = %.2lf $", pay);
		puts("\nTo exit press '-'");
		scanf("%c", &sym);
		fflush(stdin);
	}
	while(sym != '-');
}

void main(void)
{
	task13();

	printf("\nPress any key to exit");

	_getch();
}