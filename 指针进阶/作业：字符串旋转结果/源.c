#define _CRT_SECURE_NO_WARNINGS

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

//���磺����s1 = AABCD��s2 = BCDAA������1

//����s1 = abcd��s2 = ACBD������0.

//AABCD����һ���ַ��õ�ABCDA

//

//AABCD���������ַ��õ�BCDAA

//

//AABCD����һ���ַ��õ�DAABC

//˼·1��ͨ���ȶ��Ƿ���ͬ���ж���ת�˼�����֮����һ���Ƿ��Ӧ��δ��ת����ͬ

//˼·2��ת��ȥ

#include<stdio.h>

#include<string.h>

int panduan_zuoxuan(char* arr0, char* arr, int len)

{

	int i = 1;//i�������ڼ���

	int biaoji = 0;

	for (i = 1; i < len; i++)

	{

		int k = 0;

		char temp = arr[len - 1];

		for (int j = len - 1; j > 0; j--)

		{

			arr[j] = arr[j - 1];

		}

		arr[0] = temp;

		if (strcmp(arr0, arr) == 0)

		{

			biaoji = 1;

			break;

		}

	}

	return biaoji;

}

int panduan_youxuan(char* arr0, char* arr, int len)

{

	int i = 1;//������i��

	int biaoji = 0;

	for (i = 1; i < len; i++)

	{

		int k = 0;

		char temp = arr[0];

		for (int j = 0; j < len - 1; j++)

		{

			arr[j] = arr[j + 1];

		}

		arr[len - 1] = temp;

		if (strcmp(arr0, arr) == 0)

		{

			biaoji = 1; break;

		}

		return biaoji;

	}

}

int panduan(char* arr, char* arr1, int len)

{

	int biaoji = panduan_zuoxuan(arr, arr1, len);//�ж��Ƿ�������ͨ���������ܷ�ԭ.biaoji=1,˵��������

	if (biaoji == 0)

	{

		biaoji = panduan_youxuan(arr, arr1, len);////�ж��Ƿ�������ͨ���������ܷ�ԭ.biaoji=1,˵��������

	}

	return biaoji;

}

int main()

{

	char arr1[100] = { 0 };

	char arr[100] = { 0 };

	printf("����������s1��");

	scanf("%s", arr);

	printf("����������s2��");

	scanf("%s", arr1);

	int len = 0;

	for (len = 0; len < 100; len++)//�������鳤��

	{

		if (arr1[len] == 0) break;

	}

	int biaoji = panduan(arr, arr1, len);

	if (biaoji == 1) printf("�ַ�����ת\n");

}