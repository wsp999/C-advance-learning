#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
void* strncat(char* dest, const char* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	while (*(dest++) != '\0');
	dest--;
	while (num--)
	{
		*(dest++) = *(src++);
	}
	*(dest) = '\0';
	return ret;
}
int main()
{
	char a[20] = "hello ";
	char b[20] = "world";
	strncat(a, b, 5);
	printf("%s\n", a);
}