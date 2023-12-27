#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dest,const void* src, size_t num)
{
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		(char*)dest=(char*)dest+1;
		(char*)src =(char*)src + 1;

	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	int c = 0;
	char* a = &c;
	my_memcpy(arr2, arr1, 20);
	printf("%d\n", arr2[0]);
}