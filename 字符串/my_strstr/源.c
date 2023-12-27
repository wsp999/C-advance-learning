#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//检测数组中是否有小字符串
char* strstr(const char* dest, const char* src)
{
	assert(dest && src);
	while (*dest!= *src)
	{
		if (*dest != 0) dest++;
		else return NULL;
	}
	char* ret = dest;
	while (*dest == *src && *dest != 0 && *src != 0)
	{
		dest++;
		src++;
	}
	if (*src == 0) return ret;
	return NULL;
}
int main()
{
	char arr1[20] = "zps@138390.com";
	char*a=strstr(arr1, "138");
	printf("%s\n", a);
	return 0;
}