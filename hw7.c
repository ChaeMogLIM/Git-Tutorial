#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int arr3[6];

	printf("arr1: %d %d %d %d %d %d \n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
	printf("arr2: %d %d %d %d %d %d \n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4], arr2[5]);

	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];
	int* temp = &arr3[0];

	int i;

	for (i = 0; i < 6; i++)
	{
		*temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = *temp;
	}
	printf("\n");
	printf("after swap \n");
	printf("arr1: %d %d %d %d %d %d \n", *ptr1, *(ptr1+1), *(ptr1 + 2), *(ptr1 + 3), *(ptr1 + 4), *(ptr1 + 5));
	printf("arr2: %d %d %d %d %d %d \n", *ptr2, *(ptr2 + 1), *(ptr2 + 2), *(ptr2 + 3), *(ptr2 + 4), *(ptr2 + 5));

	return 0;
}
