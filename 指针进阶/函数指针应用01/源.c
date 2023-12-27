#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int x, int y)
{
	return x + y;
}
int jian(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x*y;
}
int chu(int x, int y)
{
	return x / y;
}
void calc(int (*p)(int, int))
{
	int x = 0,y = 0;
	printf("请输入两个数：");
	scanf("%d %d", &x, &y);
	printf("结果为：%d\n",p(x, y));
	return 0;
}
void menu()
{
	printf("**********************************\n");
	printf("******1-加法；2-减法；************\n");
	printf("******3-乘法；4-除法；************\n");
	printf("***********0-退出*****************\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(sum);
			break;
		case 2:
			calc(jian);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(chu);
			break;
		case 0:
			printf("关闭计算器\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (input);
}