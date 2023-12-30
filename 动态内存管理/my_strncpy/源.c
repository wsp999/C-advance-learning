#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* a, const char* b, size_t num)
{
	assert(a && b);
	char* ret = a;
	int flag = 0;
	while (num--)
	{
		if (flag == 0)
		{
			*(a++) = *(b++);
		}
		else
		{
			*(a++) = '0';
		}
		if (*b == '\0') flag = 1;
	}
	*a = '\0';
	return ret;
}
int main()
{
	char a[20] = "hello ";
	char b[20] = "world";
	my_strncpy(a, b, 10);
	printf("%s\n", a);
}