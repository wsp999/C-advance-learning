#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Day
{
	Mon,
	Thes,
	Wed//枚举常量
};
union Un
{
	int a;
	char b;
};
int main()
{
	printf("输入星期：");
	int i;
	scanf("%d", &i);
	switch (i)
	{
	case Mon:
		printf("星期一\n");
		break;
	case Thes:
		printf("星期二\n");
		break;
	case Wed:
		printf("星期三\n");
		break;
	}
}