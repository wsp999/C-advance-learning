#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void change(void* p1, void* p2, int sz)
{
	for (int j = 0; j < sz; j++)
	{
		char temp = *((char*)p1 + j);
		*((char*)p1 + j) = *((char*)p2 + j);
		*((char*)p2 + j) = temp;
	}
}
void my_qsort(void* base, int m, int n, int (*cmp)(void*, void*))
{
	for (int i = 0; i < m - 1; i++)
		for (int k = 0; k < m - i - 1; k++)
		{
			if (cmp((char*)base + k * n, (char*)base + (k + 1) * n) > 0)
			{
				change((char*)base + k * n, (char*)base + (k + 1) * n, n);
			}
		}
}
int main()
{
	int arr[] = { 3,4,2,6,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int size = sizeof(arr[0]);
	my_qsort(arr, sz, size, int_cmp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}