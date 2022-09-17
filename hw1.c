#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result1, result2, result3;

	printf("두 개의 정수 입력: ");
	scanf("%d, %d", &num1, &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("두 개의 정수를 AND한 결과: %d \n", result1);
	printf("두 개의 정수를 OR한 결과: %d \n", result2);
	printf("두 개의 정수를 XOR한 결과: %d \n", result3);

	return 0;
}
