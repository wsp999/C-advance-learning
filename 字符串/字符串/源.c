#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
////strlen���ַ������ȡ����ַ�������������ָ��-ָ�룻�ݹ�
//unsigned int my_strlen(const char* arr)
//{
//	assert(arr);
//	unsigned int i = 0;
//	/*while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;  ��1��������*/
//	//char* p = arr;
//	//while (*(p) != '\0')
//	//{
//	//	p++;
//	//}
//	//return (unsigned int)(p - arr);   ��2��ָ���ָ��
//	char* p = arr;
//	if (*p != '\0')
//	{
//		return my_strlen(p + 1)+1;
//	}
//	else
//	{
//		return 0;
//	}//�ݹ鷽�����ַ�������
//}
//int main()
//{
//	//ģ��strlen���ܺ���
//	int len=my_strlen("abcdef");
//	printf("%d\n", len);
//}
// 
//strcpyʵ��
//int my_strcpy(char* arr2,const char* arr1)
//{
//	assert(arr2);
//	assert(arr1);
//	int i = 0;
//	while (arr1[i] != '\0')
//	{
//		arr2[i] = arr1[i];
//		i++;
//	}
//	arr2[i] = arr1[i];
//	return i;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "abcdefghi";
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest && src);
//	int i = 0;
//	char* p = dest;
//	while (*dest++ != '\0')
//	{
//		;
//	}
//	dest--;//'/0'�жϺ�dest�����ټ�һ
//	while (*dest++ = *src++);
//	return p;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = "abcdef";
//	my_strcat(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

