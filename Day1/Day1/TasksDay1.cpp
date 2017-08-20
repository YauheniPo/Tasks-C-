#include <stdio.h>
#include <conio.h>
#include <math.h>
#define M_PI	3.14159265358979323846

void task1_circumference(void)
{
	printf("----Task 1----");

	double diam, lgth_circle;
	printf("\ndiameter = ");
	scanf("%lf", &diam);
	
	lgth_circle = M_PI * diam;
	printf("Circumference = %lf", lgth_circle);

	printf("\n--------------\n");
}

void task2_triangle(void)
{
	printf("----Task 2----");

	double a, b, c, P;
	printf("\ntriangle side a: ");
	scanf("%lf", &a);
	printf("triangle side b: ");
	scanf("%lf", &b);

	c = sqrt (pow(a, 2) + pow(b, 2));
	printf("Hypotenuse = %lf", c);

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
	printf("Radius = %lf", R);

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
	printf("Diameter = %lf", D);

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

void main(void)
{
	//task1_circumference();
	//task2_triangle();
	//task3_circle();
	//task4_circle();
	task5_coordinates_triangle();
	task8_sum_and_multi();

	printf("\nPress any key to exit");

	_getch();
}