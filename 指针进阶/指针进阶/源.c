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
	(*(void (*)())0)();//1.(void (*)())0 ��0ǿ��ת��Ϊvoid (*)()���ͺ����ĵ�ַ 2.֮�����0��ַ���������
	void(* signal(int,void(*)(int)))(int);//������signal�������ͷֱ�Ϊint �� ����ָ�룬signal��������ֵ����Ҳ��һ������ָ��
	pf_t signal2(int, void(*)(int));//��������Ƭ��
}