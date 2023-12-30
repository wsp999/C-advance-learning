#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* pf = fopen("C:\\Users\\dell\\Desktop\\test.txt", "r");
	if (pf == NULL)                                                                                                                                                      
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int ch=fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}