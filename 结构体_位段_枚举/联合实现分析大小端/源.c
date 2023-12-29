#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

union Un
{
	int a;
	char b;
};
int daxiaoduan(union Un* dest)
{
	dest->a = 1; //00 00 00 01
	return dest->b;//01 00 00 00小端存储
}
int main()
{
	union Un un;
	printf("%p\n", &un);
	printf("%p\n", &(un.a));
	printf("%p\n", &(un.b));//地址相同
	int i = daxiaoduan(&un);
	if (i == 0) printf("大端\n");
	if (i == 1) printf("小端\n");

}