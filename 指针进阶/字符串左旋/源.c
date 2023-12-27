#define _CRT_SECURE_NO_WARNINGS
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB
void zuoxuan(char* arr, int k,int len)
{
	char arr2[10] = { 0 };//暂存数组，存待转
	for (int a = 0; a < k; a++)
	{
		arr2[a] = arr[a];
	}
	int n = 0;
	for (int j = 0; j < len; j++)//<len保证不会动'\0'
	{
		if (j <len-k)
			arr[j] = arr[j + k];
		else
			arr[j] = arr2[n++];
	}
}
#include<stdio.h>
int main()
{
	char arr[10] = { 0 };
	printf("请输入一个字符串：");
	scanf("%s", arr);
	int len = 0;//判断字符串长度
	for (len = 0; len < 10; len++)
	{
		if (arr[len] ==0) break;
	}
	printf("请输入左旋几个字符：");
	int k = 0;
	scanf("%d", &k);
	zuoxuan(arr, k,len);
	printf("%s", arr);
}