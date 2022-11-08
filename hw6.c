#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Oddprint(int arr[])
{
	int i;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1)
			printf("Odd numbers: %d", arr[i]);
	}
}
int Evenprint(int arr[])
	{	int i;
		for (int i = 0; i < 5; i++)
		{
			if (arr[i] % 2 == 0)
				printf("Even numbers: %d", arr[i]);
		}
	}

	int main(void)
	{
		int arr[5];
		int i;

		for (i = 0; i < 5; i++)
		{
			printf("5개의 정수 입력 : ");
			scanf("%d", &arr[i]);
		}
		Oddprint(arr);
		Evenprint(arr);

		return 0;
	}
