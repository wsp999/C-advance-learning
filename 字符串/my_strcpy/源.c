#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[40] = "nihao";
	char arr2[40] = "world";
	char* arr3 = my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
}