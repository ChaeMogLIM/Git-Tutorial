#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result1, result2, result3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d, %d", &num1, &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("�� ���� ������ AND�� ���: %d \n", result1);
	printf("�� ���� ������ OR�� ���: %d \n", result2);
	printf("�� ���� ������ XOR�� ���: %d \n", result3);

	return 0;
}
