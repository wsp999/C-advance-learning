#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* dest,const char* src)
{
	assert(dest && src);
	while (*dest == *src)
	{
		if (*dest =='\0') break;
		dest++;
		src++;
	}
	return *dest - *src;
}
int main()
{
	char arr1[] = "abcdeg";
	char arr2[20] = "abcdef";
	int ret=my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf(">\n");
	}
	else if (ret == 0)
	{
		printf("=\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}