#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>//src在dest前的从后向前；src在dest后的从前向后
char* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	if ((int)dest < (int)src)
	{
		int j = 0;
		while (num--)
		{
			*((char*)dest+j) = *((char*)src + j);
			j++;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest+num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr1[20] = { 0,1,2,3 };
	int arr2[20] = { 1,2,3 };
	my_memmove(arr1 +1, arr1+2, 4);
	puts(arr1);
}