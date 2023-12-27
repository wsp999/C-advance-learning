#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//ºáÏòÁ´½Ó×Ö·û´®
char* strcat(char* dest, const char* src)
{
     static int n = 0;
	 char* ret= dest + n;
	 while (*(dest+n)=*src)
	 {
		 n++;
		 src++;
	 }
	 return ret;
}
int main()
{
	char arr1[80] = { 0 };
	strcat(arr1, "Hello ");
	strcat(arr1, "my ");
	strcat(arr1, "love!");
	printf("%s\n", arr1);
}