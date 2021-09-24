#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sqrt_function (double number);

int main (void)
{
	double val;
	double p = 0;
	printf("input number: ");
	scanf("%lf", &val);

	p = sqrt_function (val);	

	printf("\n\n\t%f\n\n", p);
	return 0;
}

double sqrt_function (double number)
{
	sqrt (number);

	return;
}
