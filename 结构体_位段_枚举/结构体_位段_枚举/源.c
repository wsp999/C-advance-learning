#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Day
{
	Mon,
	Thes,
	Wed//ö�ٳ���
};
union Un
{
	int a;
	char b;
};
int main()
{
	printf("�������ڣ�");
	int i;
	scanf("%d", &i);
	switch (i)
	{
	case Mon:
		printf("����һ\n");
		break;
	case Thes:
		printf("���ڶ�\n");
		break;
	case Wed:
		printf("������\n");
		break;
	}
}