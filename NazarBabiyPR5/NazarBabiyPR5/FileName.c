#include <stdio.h>
#include <conio.h>

// Для визначення числа Пі

#define _USE_MATH_DEFINES
#include <math.h>
#include <limits.h>
#include <float.h>

int main(void) {

	double R;
	double Sr, Lr;
	printf("\n Enter a real greater tan zero: ");
	scanf_s("%lf", &R);

	Sr = M_PI * R * R;
	Lr = 2 * M_PI * R;

	printf("\n Area of a circle of radius R = %g is %g", R, Sr);
	printf("\n The length of a circle of radius R = %g is %g", R, Lr);
	puts("");

	printf("\n Maximum integer: %d\n ", INT_MAX);
	printf("Maximum real number of float: %g\n ", FLT_MAX);
	printf("Maximum real number type double: %g\n ", DBL_MAX);
	printf("\n Press any key: ");

	_getch();

	return 0;
}