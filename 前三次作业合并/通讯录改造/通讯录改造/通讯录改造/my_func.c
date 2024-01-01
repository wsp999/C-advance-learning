#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
int name_compare(const void* a, const void* b)
{
	return strcmp(((message*)a)->name, ((message*)b)->name);
}
//查找并返回位置信息
int search_people(peomes* dest, char dest_name[])
{
	int i = 0;
	for (i = 0; i < dest->count; i++)
	{
		if (strcmp(dest->data[i].name, dest_name) == 0) return i;
	}
	return -1;
}
//读取文件信息函数
void read_file(peomes* dest, message* pf)
{
	FILE* filread = fopen("contact.txt", "rb");
	if (filread == NULL)
	{
		perror("read_file"); return;
	}
	message tmp = { 0 };
	int flag = 0;
	while (fread(&tmp, sizeof(message), 1, filread) == 1)
	{
		if (dest->count == dest->cap)
		{
			pf = (message*)realloc(dest->data, sizeof(message) * dest->count + sizeof(message) * 2);
			flag++;
		}
		dest->data[dest->count++] = tmp;
	}
	dest->cap = 3 + flag * 2;
	dest->data = pf;
	fclose(filread);
	filread = NULL;
}
//菜单
void menu()
{
	printf("*********************************\n");
	printf("*********1.增加   2.展示*********\n");
	printf("*********3.查找   4.删除*********\n");
	printf("*********5.修改   6.排序*********\n");
	printf("*********0.退出         *********\n");
	printf("*********************************\n");
}
//扩容
void expendroom(peomes* contact)
{
	message* pf = (message*)realloc(contact->data, sizeof(message)*(contact->count)+ sizeof(message)*2);
	if (pf == NULL)
	{
		perror("expandroom");
		return 1;
	}
	contact->data = pf;
	pf = NULL;
}
//初始化，1.开辟三个信息大小的内存空间，2.读取文件数据
void init_message(peomes* contact)
{
	assert(contact);
	message* pf = (message*)calloc(3, sizeof(message));
	if (pf == NULL)
	{
		perror("init_message");
		return 1;
	}
	contact->data = pf;
	contact->count = 0;
	contact->cap = 3;
	read_file(contact,pf);
	pf = NULL;
}
//退出开辟的内存空间
void exit_neicun(peomes* contact)
{
	free(contact->data);
	contact = NULL;
}
//增加联系人信息，空间不够再开辟两个
void add_message(peomes* pc)
{
	assert(pc);
	if (pc->count==pc->cap)
	{
		expendroom(pc);
		printf("扩容成功\n");
	}
	printf("请输入姓名：");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:");
	scanf("%d", &(pc->data[pc->count]).age);
	printf("请输入电话：");
	scanf("%s",pc->data[pc->count].tele);
	printf("请输入地址：");
	scanf("%s",pc->data[pc->count].place);
	printf("添加成功!\n");
	pc->count++;
}
//展示通讯录信息
void show_message(peomes* contact)
{
	assert(contact);
	if (contact->count == 0)
	{
		printf("目前通讯录没有信息。\n");
		return 0;
	}
	int i = 0;
	printf("%-6s%-5s%-15s%-10s\n", "姓名", "年龄", "电话", "地址");
	for (i = 0; i < contact->count; i++)
	{
		printf("%-6s%-5d%-15s%-10s\n", contact->data[i].name,
			contact->data[i].age,
			contact->data[i].tele,
			contact->data[i].place);
	}
	printf("展示完成\n");
	return 0;
}
//查找信息
void search_message(peomes* contact)
{
	assert(contact);
	if (contact->count == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char dest[20];
	printf("请输入查找的名字:");
	scanf("%s", dest);
	int i = 0;
	for (i = 0; i < contact->count; i++)
	{
		if (strcmp(contact->data[i].name, dest) == 0)
		{
			printf("%-6s%-5s%-15s%-10s\n", "姓名", "年龄", "电话", "地址");
			printf("%-6s%-5d%-15s%-10s\n", contact->data[i].name,
				contact->data[i].age,
				contact->data[i].tele,
				contact->data[i].place);
			return;
		}
	}
	printf("未查找到。\n");
	return;
}
//删除信息
void delete_message(peomes* dest)
{
	printf("请输入要删除的对象名：");
	char name1[20];
	scanf("%s", name1);
	int i = 0;
	i = search_people(dest, name1);
	if (i == -1)
	{
		printf("通讯录未找到目标名，请重新输入。\n");
		return;
	}
	for (int j = i; i < dest->count - 1; i++)
	{
		dest->data[i] = dest->data[i + 1];
	}
	dest->count--;
	printf("已删除。\n");
}
//修改信息
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
	printf("请输入电话:");
	scanf("%s", dest->data[i].tele);
	printf("请输入地址:");
	scanf("%s", dest->data[i].place);
}
//排序
void qsort_message(peomes* dest)
{
	if (dest->count == 0)
	{
		printf("目前通讯录没有内容无法排序.\n");
		return;
	}
	if (dest->count == 1)
	{
		printf("目前通讯录只有一名联系人，无需排序\n");
		return;
	}
	qsort(dest->data, dest->count, sizeof(dest->data[0]), name_compare);
	printf("排序完成.\n");
}
void save_message(peomes* dest)
{
	assert(dest);
	FILE* pfwrite = fopen("contact.txt", "wb");
	if (pfwrite == NULL)
	{
		perror("save_message");
		return;
	}
	int i = 0;
	for (i = 0; i < dest->count; i++)
	{
		fwrite(dest->data + i, sizeof(message), 1, pfwrite);
	}
	fclose(pfwrite);
	pfwrite = NULL;
}