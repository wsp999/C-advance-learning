#define _CRT_SECURE_NO_WARNINGS

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

//例如：给定s1 = AABCD和s2 = BCDAA，返回1

//给定s1 = abcd和s2 = ACBD，返回0.

//AABCD左旋一个字符得到ABCDA

//

//AABCD左旋两个字符得到BCDAA

//

//AABCD右旋一个字符得到DAABC

//思路1：通过比对是否相同先判断旋转了几个，之后看下一个是否和应该未旋转的相同

//思路2：转回去

#include<stdio.h>

#include<string.h>

int panduan_zuoxuan(char* arr0, char* arr, int len)

{

	int i = 1;//i是右旋第几次

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

	int i = 1;//左旋第i次

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

	int biaoji = panduan_zuoxuan(arr, arr1, len);//判断是否左旋，通过右旋看能否还原.biaoji=1,说明是左旋

	if (biaoji == 0)

	{

		biaoji = panduan_youxuan(arr, arr1, len);////判断是否右旋，通过左旋看能否还原.biaoji=1,说明是右旋

	}

	return biaoji;

}

int main()

{

	char arr1[100] = { 0 };

	char arr[100] = { 0 };

	printf("请输入数组s1：");

	scanf("%s", arr);

	printf("请输入数组s2：");

	scanf("%s", arr1);

	int len = 0;

	for (len = 0; len < 100; len++)//计算数组长度

	{

		if (arr1[len] == 0) break;

	}

	int biaoji = panduan(arr, arr1, len);

	if (biaoji == 1) printf("字符串旋转\n");

}