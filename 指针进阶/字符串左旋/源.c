#define _CRT_SECURE_NO_WARNINGS
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB
void zuoxuan(char* arr, int k,int len)
{
	char arr2[10] = { 0 };//�ݴ����飬���ת
	for (int a = 0; a < k; a++)
	{
		arr2[a] = arr[a];
	}
	int n = 0;
	for (int j = 0; j < len; j++)//<len��֤���ᶯ'\0'
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
	printf("������һ���ַ�����");
	scanf("%s", arr);
	int len = 0;//�ж��ַ�������
	for (len = 0; len < 10; len++)
	{
		if (arr[len] ==0) break;
	}
	printf("���������������ַ���");
	int k = 0;
	scanf("%d", &k);
	zuoxuan(arr, k,len);
	printf("%s", arr);
}