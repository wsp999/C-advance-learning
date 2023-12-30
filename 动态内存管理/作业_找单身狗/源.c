#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void seek_singledog(char* dest)
{
	int i = 0, j = 0, flag = 0,k=0;
	char ret[100] = { 0 };
	for (i = 0; i < strlen(dest); i++)
	{
		for (j = 0; j < strlen(dest); j++)
		{
			if ((i!=j)&&(dest[i] == dest[j]))
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			ret[k] = dest[i];
			k++;
		}
		flag = 0;
	}
	ret[k] = '\0';
	k = 0;
	while (*(dest++) =ret[k++]);
}
int main()
{
	char arr[20] = "hohjmnmaa";
	seek_singledog(arr);
	printf("%s\n", arr);
}