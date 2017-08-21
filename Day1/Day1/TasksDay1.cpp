#include <stdio.h>
#include <conio.h>
#include <math.h>
#define M_PI	3.1415927

void task1_circumference(void)
{
	printf("----Task 1----");

	double diam, lgth_circle;
	printf("\ndiameter = ");
	scanf("%lf", &diam);
	
	lgth_circle = M_PI * diam;
	printf("\nCircumference = %lf", lgth_circle);

	printf("\n--------------\n");
}

void task2_right_triangle(void)
{
	printf("----Task 2----");

	double a, b, c, P;
	printf("\ntriangle side a: ");
	scanf("%lf", &a);
	printf("triangle side b: ");
	scanf("%lf", &b);

	c = sqrt (pow(a, 2) + pow(b, 2));
	printf("\nHypotenuse = %lf", c);

	P = a + b + c;
	printf("\nPerimeter = %lf", P);

	printf("\n--------------\n");
}

void task3_circle(void)
{
	printf("----Task 3----");

	double R, S, lgth_circle;
	printf("\ncircumference = ");
	scanf("%lf", &lgth_circle);
	
	R = lgth_circle / (2 * M_PI);
	printf("\nRadius = %lf", R);

	S = 2 * M_PI * pow(R, 2);
	printf("\nArea = %lf", S);

	printf("\n--------------\n");
}

void task4_circle(void)
{
	printf("----Task 4----");

	double D, S, lgth_circle;
	printf("\narea of the circle = ");
	scanf("%lf", &S);
	
	D = sqrt(S /  M_PI);
	printf("\nDiameter = %lf", D);

	lgth_circle = 2 * M_PI * D / 2;
	printf("\nCircumference = %lf", lgth_circle);

	printf("\n--------------\n");
}

void task5_coordinates_triangle(void)
{
	printf("----Task 5----");

	double x1, y1, x2, y2, x3, y3, S, p, P, ab, bc, ac;
	printf("\nEnter the coordinates of the vertices of the triangle");
	printf("\nA:\nx1 = ");
	scanf("%lf", &x1);
	printf("y1 = ");
	scanf("%lf", &y1);
	printf("B:\nx2 = ");
	scanf("%lf", &x2);
	printf("y2 = ");
	scanf("%lf", &y2);
	printf("C:\nx3 = ");
	scanf("%lf", &x3);
	printf("y3 = ");
	scanf("%lf", &y3);

	ab = abs(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
	bc = abs(sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)));
	ac = abs(sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2)));
	P = ab + ac + bc;
	p = P / 2;
	S = sqrt(abs(p * (p - ab) * (p - bc) * (p - ac)));
	
	printf("\nPerimeter = %lf", P);
	printf("\nArea of the triangle = %lf", S);

	printf("\n--------------\n");
}

void task6_swap_numbers(void)
{
	printf("----Task 6----");

	int A, B, C, d;
	printf("\nA = ");
	scanf("%d", &A);
	printf("B = ");
	scanf("%d", &B);
	printf("C = ");
	scanf("%d", &C);

	d = B;
	B = A;
	A = C;
	C = d;
	
	printf("\nA = %d, B = %d, C = %d", A, B, C);

	printf("\n--------------\n");
}

void task7_culculate_expression(void)
{
	printf("----Task 7----");

	double y, x;
	printf("\nx = ");
	scanf("%lf", &x);

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	
	printf("\ny = %lf", y);

	printf("\n--------------\n");
}

void task8_sum_and_multi(void)
{
	printf("----Task 8----");

	int x, sum, multi;
	printf("\nnumber = ");
	scanf("%d", &x);
	
	sum = (x % 10) + (x / 10);
	printf("sum = %d", sum);

	multi = (x % 10) * (x / 10);
	printf("\nMultiplication = %d", multi);

	printf("\n--------------\n");
}

void task9_geometric_mean(void)
{
	printf("----Task 9----");

	double x, y, mean_geo;
	printf("\nx = ");
	scanf("%lf", &x);
	printf("y = ");
	scanf("%lf", &y);

	mean_geo = sqrt(x * y);

	printf("\nGeometric Mean = %lf", mean_geo);

	printf("\n--------------\n");
}

void task10_linear_equation(void)
{
	printf("----Task 10----");

	double x, y, A1, B1, C1, A2, B2, C2;
	printf("\nA1 = ");
	scanf("%lf", &A1);
	printf("B1 = ");
	scanf("%lf", &B1);
	printf("C1 = ");
	scanf("%lf", &C1);
	printf("A2 = ");
	scanf("%lf", &A2);
	printf("B2 = ");
	scanf("%lf", &B2);
	printf("C2 = ");
	scanf("%lf", &C2);

	x = (C1 * B2 - C2 * B1) / (A1 * B2 - A2 * B1);
	y = (C2 * A1 - C1 * A2) / (A1 * B2 - A2 * B1);

	printf("\nx = %lf, y = %lf", x, y);

	printf("\nA1*x + B1*y = C1");
	printf("\nA2*x + B2*y = C2");
	C1 = A1 * x + B1 * y;
	C2 = A2 * x + B2 * y;

	printf("\nC1 = %lf", C1);
	printf("\nC2 = %lf", C2);

	printf("\n--------------\n");
}

void task11_price_per_kilogram(void)
{
	printf("----Task 11----");

	double odds, kg_choco, kg_toff, price_choc, price_toff, mass_choc, mass_toff;
	printf("\nchocolates price = ");
	scanf("%lf", &price_choc);
	printf("chocolates mass = ");
	scanf("%lf", &mass_choc);
	printf("toffee price = ");
	scanf("%lf", &price_toff);
	printf("toffee mass = ");
	scanf("%lf", &mass_toff);

	kg_choco = price_choc / mass_choc;
	printf("\nThe price of a kilogram of chocolates = %lf", kg_choco);
	kg_toff = price_toff / mass_toff;
	printf("\nThe price of a kilogram of toffee = %lf", kg_toff);

	if(kg_choco > kg_toff)
	{
		odds = kg_choco / kg_toff;
		printf("\nChocolates cost more than %lf times", odds);
	}
	else if(kg_choco < kg_toff)
	{
		odds = kg_toff / kg_choco;
		printf("\nChocolates are cheaper %lf times", odds);
	}
	else 
	{
		odds = 0;
		printf("Prices are same");
	}

	printf("\n--------------\n");
}

void task12_angles_in_radians(void) 
{
	printf("----Task 12----");
	
	double alpha, rad;
	printf("\nEnter alpha: ");
	scanf("%lf", &alpha);

	rad = alpha * M_PI / 180;
	
	printf("\nAlpha in radians = %lf", rad);

	printf("\n--------------\n");
}

void task_variant3(void)
{
	printf("----Variant 3----");
	
	double alpha, z1, z2;
	printf("\nEnter alpha: ");
	scanf("%lf", &alpha);

	printf("z1 = (sin(2*alpha) + sin(5*alpha) - sin(3*alpha)) / (cos(alpha) + 1 - 2 * (sin(2*alpha))^2)");
	printf("\nz2 = 2 * sin(alpha)\n");

	z1 = (sin(2*alpha) + sin(5*alpha) - sin(3*alpha)) / (cos(alpha) + 1 - 2 * pow((sin(2*alpha)), 2));
	z2 = 2 * sin(alpha);

	printf("\nz1 = %lf", z1);
	printf("\nz2 = %lf", z2);

	printf("\n--------------\n");
}

void main(void)
{
	task1_circumference();
	task2_right_triangle();
	task3_circle();
	task4_circle();
	task5_coordinates_triangle();
	task6_swap_numbers();
	task7_culculate_expression();
	task8_sum_and_multi();
	task9_geometric_mean();
	task10_linear_equation();
	task11_price_per_kilogram();
	task12_angles_in_radians(); 
	task_variant3();

	printf("\nPress any key to exit");

	_getch();
}