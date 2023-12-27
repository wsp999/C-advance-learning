#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
//显示菜单
void menu()
{
	printf("*************************************\n");
	printf("*********1.添加        2.展示********\n");
	printf("*********3.删除        4.查找********\n");
	printf("*********5.修改        6.排序********\n");
	printf("*********       0.退出       ********\n");
	printf("*************************************\n");
}
//寻找通讯录中的对应名字的位置，找不到返回-1
int search_people(peomes* dest, char dest_name[])
{
	int i = 0;
	for (i = 0; i < dest->count; i++)
	{
		if (strcmp(dest->data[i].name, dest_name) == 0) return i;
	}
	return -1;
}
//初始化通讯录全部为0
void chushihua(peomes* dest)
{
	memset(dest->data,0,sizeof(dest->data));
	dest->count = 0;
}
//添加联系人信息
void message_add(peomes* dest)
{
	if (dest->count == 100)
	{
		printf("通讯录已满，请清理信息.");
		return;
	}
	printf("请输入要添加的联系人信息：\n");
	printf("请输入名字:");
	scanf("%s", dest->data[dest->count].name);//取出的的是数组名
	printf("请输入年龄:");
	scanf("%d", &dest->data[dest->count].age);
	printf("请输入性别:");
	scanf("%s", dest->data[dest->count].sex);
	printf("请输入电话:");
	scanf("%s", dest->data[dest->count].tele);
	printf("请输入地址:");
	scanf("%s", dest->data[dest->count].place);
	dest->count++;
}
//显示联系人信息
void show_message(const peomes* dest)
{
	if (dest->count == 0)
	{
		printf("通讯录为空.\n");
		return;
	}
	int i = 0;
	printf("%20s\t%5s\t%5s\t%15s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < dest->count; i++)
	{
		printf("%20s\t%5d\t%5s\t%15s\t%20s\n", dest->data[i].name,
			dest->data[i].age,
			dest->data[i].sex,
			dest->data[i].tele,
			dest->data[i].place);
	}
}
//删除联系人信息
void delete_message(peomes* dest)
{
	printf("请输入要删除的对象名：");
	char name1[20];
	scanf("%s", name1);
	int i=0;
	i = search_people(dest, name1);
	if (i == -1)
	{
		printf("通讯录未找到目标名，请重新输入。\n");
		return;
	}
	for (int j = i; i < dest->count-1; i++)
	{
		dest->data[i] = dest->data[i + 1];
	}
	dest->count--;
	printf("已删除。\n");
}
//查找某个人的信息
void search_message(peomes* dest)
{
	printf("请输入要查找的人名：");
	char name[20];
	scanf("%s", name);
	int i = search_people(dest, name);
	if (i == -1)
	{
		printf("未查到该人信息，请重新操作.\n");
		return;
	}
	printf("%20s\t%5s\t%5s\t%15s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%20s\t%5d\t%5s\t%15s\t%20s\n", dest->data[i].name,
		dest->data[i].age,
		dest->data[i].sex,
		dest->data[i].tele,
		dest->data[i].place); 
}
//修改某人信息
void change_messsage(peomes* dest)
{
	printf("请输入要修改信息的联系人:");
	char name[20];
	scanf("%s", name);
	int i = search_people(dest, name);
	if (i == -1)
	{
		printf("通讯录中查无此人，请重新操作.\n");
		return;
	}
	printf("请输入修改信息：\n");
	printf("请输入名字:");
	scanf("%s", dest->data[i].name);
	printf("请输入年龄:");
	scanf("%d", &dest->data[i].age);
	printf("请输入性别:");
	scanf("%s", dest->data[i].sex);
	printf("请输入电话:");
	scanf("%s", dest->data[i].tele);
	printf("请输入地址:");
	scanf("%s", dest->data[i].place);
}