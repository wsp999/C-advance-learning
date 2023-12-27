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
	int count;//统计当前通讯率联系人个数，有大用
};
typedef struct message_arr peomes;
int search_people(peomes* dest, char dest_name[]);
void chushihua(peomes* dest);
void message_add(peomes* dest);
void show_message(const peomes* dest);
void delete_message(peomes* dest);
void search_message(peomes* dest);
void c_messsage(peomes* dest);