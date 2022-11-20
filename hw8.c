#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
double pow(double a, double b);
double sqrt(double x);
 
double resultSD(double arr[])
{
	double sum = 0.0, mean, SD = 0.0;
	int i;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	mean = sum / 5;

	for (i = 0; i < 5; i++)
		SD += pow((arr[i] - mean), 2);

	return sqrt(SD / 5);
}

double main(void)
{
	int i;
	double arr[5];

	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &arr[i]);
	}
	printf("Standard Deviation: %.3lf", resultSD(arr));
}


	
