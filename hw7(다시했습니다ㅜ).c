#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 저번주에 이상한 값 뜬거 못 고치고 다음 주에 다시했습니다
// 재호교수님 죄송합니다 !!!!
int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int arr3[6];

	printf("arr1: %d %d %d %d %d %d \n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
	printf("arr2: %d %d %d %d %d %d \n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];

	int i, temp;
	for (i = 0; i < 6; i++)
	{
		arr3[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr3[i];
	}

	printf("\n");
	printf("after swap \n");
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", ptr1[i]);

	printf("\n");
	printf("arr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", ptr2[i]);

	return 0;
}