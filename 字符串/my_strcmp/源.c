#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str2 == 0) return 0;
		str1++; str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char str1[20] = "hello";
	char str2[20] = "hello";
	int ret = strcmp(str1, str2);
	if (ret == 0) printf("=");
}