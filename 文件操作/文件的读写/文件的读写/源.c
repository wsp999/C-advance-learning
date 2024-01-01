#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//fgetc  fputc
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\dell\\Desktop\\test.txt", "r");
//	if (pf == NULL)                                                                                                                                                      
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	int ch=fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
// fgets fputs
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\dell\\Desktop\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fputs("hello world",pf);
//	char arr[20];
//	//fscanf(pf,"%s",arr);
//	//fscanf(pf, "%s", arr);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//fscanf fprintf
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhang",16,0.5f };
//	//struct S s = { 0 };
//	FILE* pf = fopen("C:\\Users\\dell\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[20];
//	//fprintf(pf,"%s %d %f",s.arr,s.age,s.score);
//	//fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//	fprintf(stdout,"%s %d %f", s.arr, s.age, s.score);
//	pf = NULL;
//	return 0;
//}
//fread fwrite
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	//struct S s = { "zhang",16,0.5f };
//	struct S s = { 0 };
//	FILE* pf = fopen("C:\\Users\\dell\\Desktop\\test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[20];
//	//fwrite(&s, sizeof(s), 1, pf);
//	fread(&s, sizeof(s), 1, pf);
//	fprintf(stdout, "%s %d %f", s.arr, &(s.age), &(s.score));
//	pf = NULL;
//	return 0;
//}
//sprintf sscanf
struct S
{
	char arr[10];
	int age;
	float score;
};
int main()
{
	//ÌáÈ¡×Ö·û´®
	//struct S s = { 0 };
	//char arr[20]="zhang 16 0.53";
	//sscanf(arr, "%s %d %f", &s.arr, &(s.age), &(s.score));
	//Ð´×Ö·û´®
	struct S s = { "zhang",16,0.53};
	char arr[20] = { 0 };
	sprintf(arr, "%s %d %f", s.arr, (s.age), (s.score));
	fprintf(stdout, "%s", arr);
	return 0;
}