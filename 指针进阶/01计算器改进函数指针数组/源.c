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
	return x * y;
}
int chu(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("**********************************\n");
	printf("******1-�ӷ���2-������************\n");
	printf("******3-�˷���4-������************\n");
	printf("***********0-�˳�*****************\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0, x = 0, y = 0;
	int (*arr[5])(int, int) = { 0,sum,jian,mul,chu };
	do
	{
		menu();
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳������\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("��������������");
			scanf("%d %d", &x, &y);
			printf("%d\n", arr[input](x, y));
		}
		else
		{
			printf("�������\n");
		}

	} while (input);
}