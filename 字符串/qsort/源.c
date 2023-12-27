#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int compare_age(const void* a1, const void* a2)
{
	return *(int*)a1 - *(int*)a2;
}
void change(void* a1, void* a2, size_t wid)
{
	while (wid--)
	{
		char temp = 0;
		temp = *((char*)a1 + wid);
		*((char*)a1 + wid) = *((char*)a2 + wid);
		*((char*)a2 + wid) = temp;
	}
}
void my_qsort(void* arr, size_t num, size_t wid, int (*compare)(const void*,const void*))
{
	int i = 0, j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (compare((char*)arr + wid * j, (char*)arr + wid * (j+ 1)) > 0)
			{
				change((char*)arr + wid * j, (char*)arr + wid * (j + 1),wid);
			}
		}
	}
}
struct stu {
	char name[20];
	int age;
	char b[20];
};
int main()
{
	struct stu a[3] = { "张培森",16,"男", "吴晓",18,"女", "销售",20,"女" };
	//int arr[20] = { 6,4,9,23,45,60 };
	my_qsort(a->age, 6, sizeof(a[0]), compare_age);
	return 0;

}