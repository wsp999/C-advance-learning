#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strlen(const char* src)
{
	assert(src);
	int  ret = 0;
	while (src[ret++] != 0);
	return ret - 1;
}
int main()
{
	char arr1[20] = "hello";
	printf("len of arr1=%d\n", my_strlen(arr1));
}