#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void menu();
struct message
{
	char name[20];
	int age;
	char sex[5];
	char tele[14];
	char place[20];
};
struct message_arr
{
	struct message data[100];
	int count;//ͳ�Ƶ�ǰͨѶ����ϵ�˸������д���
};
typedef struct message_arr peomes;