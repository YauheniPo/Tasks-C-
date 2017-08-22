#include <stdio.h>
#include <math.h>
#include <conio.h>

void perimeter_and_area()
{
	double side, P, S;

	printf("Side of a square: ");
	scanf("%lf", &side);

	P = 4 * side;
	S = side * side;

	printf("P = %0*.*lf\nS = %0*.*lf\n", 0, 1, P, 0, 1, S);
}

void swap_numbers()
{
	int number, swap_number;

	printf("\nNumber: ");
	scanf("%d", &number);
	
	swap_number = (number % 10) * 10 + (number / 10);
	printf("Modified value: %d\n", swap_number);
}

void culculate_expression()
{
	double number, result, d1, d2;

	do 
	{
		printf("\nEnter a number other than [-2, 1): ");
		scanf("%lf", &number);

		d1 = sqrt (pow(number, 2) - 4);
		d2 = sqrt (2 * number + 2 * d1);
		result = d2 / (d1 + number + 2);
		printf("Result of expression: %lf\n", result);
	}
	while (number == 0 || number == -2);
}

void main(void)
{
	perimeter_and_area();
	swap_numbers();
	culculate_expression();

	printf("\nPress any key to exit");

	_getch();
}