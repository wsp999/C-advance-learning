#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
int name_compare(const void* a, const void* b)
{
	return strcmp(((message*)a)->name, ((message*)b)->name);
}
//���Ҳ�����λ����Ϣ
int search_people(peomes* dest, char dest_name[])
{
	int i = 0;
	for (i = 0; i < dest->count; i++)
	{
		if (strcmp(dest->data[i].name, dest_name) == 0) return i;
	}
	return -1;
}
//��ȡ�ļ���Ϣ����
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
//�˵�
void menu()
{
	printf("*********************************\n");
	printf("*********1.����   2.չʾ*********\n");
	printf("*********3.����   4.ɾ��*********\n");
	printf("*********5.�޸�   6.����*********\n");
	printf("*********0.�˳�         *********\n");
	printf("*********************************\n");
}
//����
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
//��ʼ����1.����������Ϣ��С���ڴ�ռ䣬2.��ȡ�ļ�����
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
//�˳����ٵ��ڴ�ռ�
void exit_neicun(peomes* contact)
{
	free(contact->data);
	contact = NULL;
}
//������ϵ����Ϣ���ռ䲻���ٿ�������
void add_message(peomes* pc)
{
	assert(pc);
	if (pc->count==pc->cap)
	{
		expendroom(pc);
		printf("���ݳɹ�\n");
	}
	printf("������������");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:");
	scanf("%d", &(pc->data[pc->count]).age);
	printf("������绰��");
	scanf("%s",pc->data[pc->count].tele);
	printf("�������ַ��");
	scanf("%s",pc->data[pc->count].place);
	printf("��ӳɹ�!\n");
	pc->count++;
}
//չʾͨѶ¼��Ϣ
void show_message(peomes* contact)
{
	assert(contact);
	if (contact->count == 0)
	{
		printf("ĿǰͨѶ¼û����Ϣ��\n");
		return 0;
	}
	int i = 0;
	printf("%-6s%-5s%-15s%-10s\n", "����", "����", "�绰", "��ַ");
	for (i = 0; i < contact->count; i++)
	{
		printf("%-6s%-5d%-15s%-10s\n", contact->data[i].name,
			contact->data[i].age,
			contact->data[i].tele,
			contact->data[i].place);
	}
	printf("չʾ���\n");
	return 0;
}
//������Ϣ
void search_message(peomes* contact)
{
	assert(contact);
	if (contact->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char dest[20];
	printf("��������ҵ�����:");
	scanf("%s", dest);
	int i = 0;
	for (i = 0; i < contact->count; i++)
	{
		if (strcmp(contact->data[i].name, dest) == 0)
		{
			printf("%-6s%-5s%-15s%-10s\n", "����", "����", "�绰", "��ַ");
			printf("%-6s%-5d%-15s%-10s\n", contact->data[i].name,
				contact->data[i].age,
				contact->data[i].tele,
				contact->data[i].place);
			return;
		}
	}
	printf("δ���ҵ���\n");
	return;
}
//ɾ����Ϣ
void delete_message(peomes* dest)
{
	printf("������Ҫɾ���Ķ�������");
	char name1[20];
	scanf("%s", name1);
	int i = 0;
	i = search_people(dest, name1);
	if (i == -1)
	{
		printf("ͨѶ¼δ�ҵ�Ŀ���������������롣\n");
		return;
	}
	for (int j = i; i < dest->count - 1; i++)
	{
		dest->data[i] = dest->data[i + 1];
	}
	dest->count--;
	printf("��ɾ����\n");
}
//�޸���Ϣ
void change_messsage(peomes* dest)
{
	printf("������Ҫ�޸���Ϣ����ϵ��:");
	char name[20];
	scanf("%s", name);
	int i = search_people(dest, name);
	if (i == -1)
	{
		printf("ͨѶ¼�в��޴��ˣ������²���.\n");
		return;
	}
	printf("�������޸���Ϣ��\n");
	printf("����������:");
	scanf("%s", dest->data[i].name);
	printf("����������:");
	scanf("%d", &dest->data[i].age);
	printf("������绰:");
	scanf("%s", dest->data[i].tele);
	printf("�������ַ:");
	scanf("%s", dest->data[i].place);
}
//����
void qsort_message(peomes* dest)
{
	if (dest->count == 0)
	{
		printf("ĿǰͨѶ¼û�������޷�����.\n");
		return;
	}
	if (dest->count == 1)
	{
		printf("ĿǰͨѶ¼ֻ��һ����ϵ�ˣ���������\n");
		return;
	}
	qsort(dest->data, dest->count, sizeof(dest->data[0]), name_compare);
	printf("�������.\n");
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