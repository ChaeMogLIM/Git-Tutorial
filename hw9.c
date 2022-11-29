#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}
int main(void)
{
	int ch, i, a;
	char str[a];
	printf("문자 입력: ");

	for (i = 0; i < a; i++)
	{
		ch = getchar();
		ch = convCase(ch);
	}
	
	return 0;
}
