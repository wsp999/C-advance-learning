#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef void(*pf_t)(int);
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[5] = { 0 };
	int(*p)[5] = &arr;
	printf("%p\n", add);
	printf("%p\n", &add);
	int (*pf)(int, int) = &add;
	int ret = pf(2, 3); //(*pf)(2, 3);
	printf("%d\n", ret);
	(*(void (*)())0)();//1.(void (*)())0 把0强制转换为void (*)()类型函数的地址 2.之后调用0地址初这个函数
	void(* signal(int,void(*)(int)))(int);//声明的signal参数类型分别为int 和 函数指针，signal函数返回值类型也是一个函数指针
	pf_t signal2(int, void(*)(int));//洛天依唱片机
}