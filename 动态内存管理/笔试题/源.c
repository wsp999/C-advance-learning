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
//	strcpy(str, "hello world");//str为空指针，函数中对空指针解引用会导致崩溃
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