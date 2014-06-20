#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>


float fuction(float a, float x){
	return (7*(54*pow(a,2)-33*a*x+4*pow(x,2)))/(-4*pow(a,2)+a*x+5*pow(x,2));
}

// Метод прямоугольника
float method_rectangles(float a, float b, float c, int n)
{
	float h,sum,x;
	int i;

	sum = 0;
	h=(c-b)/n;

	for(i = 1; i <= n; i++)
	{
		x = b + (i-0.5)*h;
		sum += fuction(a, x);
	}

	return h*sum;
}

void main()
{
	float a; // Значение a для функции
	float b, c;   // Границы отрезка
	float eps;   // Точность вычисления (кол-во отрезков)

	setlocale(LC_CTYPE,"Russian");

	printf ("Приближенное вычесление интеграла f(x)=(7*(54*a^2-33*a*x+4*x^2))/(-4*a^2+a*x+5*x^2)\n");
	printf ("\nВведите:\n");

	printf ("Значение a: ");
	scanf  ("%f",&a);

	printf ("Нижняя граница интервала: ");
	scanf  ("%f",&b);

	printf ("Верхняя граница интервала: ");
	scanf  ("%f",&c);

	printf ("Точность вычисления: ");
	scanf  ("%f",&eps);

	printf("Метод Прямоугольник %f\n", method_rectangles(a, b, c, eps));

	getch();

}
