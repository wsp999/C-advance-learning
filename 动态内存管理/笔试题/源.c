#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//strΪ��ָ�룬�����жԿ�ָ������ûᵼ�±���
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
char* GetMemory(void)
{
	char *p= "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}