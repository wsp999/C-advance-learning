#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
void menu()
{
	printf("*************************************\n");
	printf("*********1.添加        2.展示********\n");
	printf("*********3.删除        4.查找********\n");
	printf("*********5.修改        6.排序********\n");
	printf("*********       0.退出       ********\n");
	printf("*************************************\n");
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
void show_message(peomes* dest)
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
	int i=0;
	i=search_message(dest,)
}