#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strncpy(char* dest, const char* src,size_t count)
{
	assert(dest && src);
	while (count--)
	{
		if (*src == '\0')
		{
			*dest++ = *src; break;
		}
		*dest++ = *src++;
	}
	while (count!=-1&&count--)
	{
		*dest++ = '\0';
	}
}
int main()
{
	char arr1[] = "abcdeg";
	char arr2[20] = "ab";
	my_strncpy(arr1, arr2,4);
	printf("%s\n", arr1);
}