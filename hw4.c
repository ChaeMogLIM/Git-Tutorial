#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n,m;
	printf("Please enter a number: ");
	scanf("%d", &n);

	for (m = 2; m < n; m++)
	{
		if (n % m == 0)
			break;
		else
			continue;
	}
	if(n==m)
	printf("It is a prime number \n");
	else
	printf("It is not a prime number \n");

	return 0;
}