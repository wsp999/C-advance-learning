#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//菜单
typedef struct S
{
	char name[20];
	int age;
	char tele[14];
	char place[20];
}message;
typedef struct M
{
	message* data;
	int count;//记录当前通讯录联系人个数
	int cap;
}peomes;
void menu();
void init_message(peomes* contact);
void add_message(peomes* pc);
void show_message(peomes* contact);
void search_message(peomes* contact);
void delete_message(peomes* dest);
void change_messsage(peomes* dest);
void qsort_message(peomes* dest);