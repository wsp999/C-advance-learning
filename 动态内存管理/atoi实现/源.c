#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int my_atoi(const char* arr)
{
	int i = 0,flag=1,ret=0,count=0;
	while (arr[i] != '\0')
	{
		if(arr[i] == '+')
		{
			flag = 1;
		}
		if(arr[i] == '-')
		{
			flag = -1;
		}
		while ('0' <= arr[i]&&arr[i] <= '9')
		{
			ret = ret * 10 + flag * (arr[i] - '0');
			i++;
			count = 1;
		}
		if (count == 1) break;
		i++;
	}
	return ret;
}
int main()
{
	//printf("请输入一个字符串:");
	char arr[100]="hello world23";
	//gets(arr);
	printf("字符串整体值为:");
	int ret = my_atoi(arr);
	printf("%d\n", ret);
}
