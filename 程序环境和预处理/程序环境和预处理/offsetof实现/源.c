#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
#define OFFSETOF(TYPE,NAME) (int)&(((TYPE*)0)->NAME)
struct S
{
	char c1;
	int i;
	char c2;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));
	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S, i));
	//printf("%d\n", offsetof(struct S, c2));
}