#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
//��ʾ�˵�
void menu()
{
	printf("*************************************\n");
	printf("*********1.���        2.չʾ********\n");
	printf("*********3.ɾ��        4.����********\n");
	printf("*********5.�޸�        6.����********\n");
	printf("*********       0.�˳�       ********\n");
	printf("*************************************\n");
}
//Ѱ��ͨѶ¼�еĶ�Ӧ���ֵ�λ�ã��Ҳ�������-1
int search_people(peomes* dest, char dest_name[])
{
	int i = 0;
	for (i = 0; i < dest->count; i++)
	{
		if (strcmp(dest->data[i].name, dest_name) == 0) return i;
	}
	return -1;
}
//��ʼ��ͨѶ¼ȫ��Ϊ0
void chushihua(peomes* dest)
{
	memset(dest->data,0,sizeof(dest->data));
	dest->count = 0;
}
//�����ϵ����Ϣ
void message_add(peomes* dest)
{
	if (dest->count == 100)
	{
		printf("ͨѶ¼��������������Ϣ.");
		return;
	}
	printf("������Ҫ��ӵ���ϵ����Ϣ��\n");
	printf("����������:");
	scanf("%s", dest->data[dest->count].name);//ȡ���ĵ���������
	printf("����������:");
	scanf("%d", &dest->data[dest->count].age);
	printf("�������Ա�:");
	scanf("%s", dest->data[dest->count].sex);
	printf("������绰:");
	scanf("%s", dest->data[dest->count].tele);
	printf("�������ַ:");
	scanf("%s", dest->data[dest->count].place);
	dest->count++;
}
//��ʾ��ϵ����Ϣ
void show_message(const peomes* dest)
{
	if (dest->count == 0)
	{
		printf("ͨѶ¼Ϊ��.\n");
		return;
	}
	int i = 0;
	printf("%20s\t%5s\t%5s\t%15s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < dest->count; i++)
	{
		printf("%20s\t%5d\t%5s\t%15s\t%20s\n", dest->data[i].name,
			dest->data[i].age,
			dest->data[i].sex,
			dest->data[i].tele,
			dest->data[i].place);
	}
}
//ɾ����ϵ����Ϣ
void delete_message(peomes* dest)
{
	printf("������Ҫɾ���Ķ�������");
	char name1[20];
	scanf("%s", name1);
	int i=0;
	i = search_people(dest, name1);
	if (i == -1)
	{
		printf("ͨѶ¼δ�ҵ�Ŀ���������������롣\n");
		return;
	}
	for (int j = i; i < dest->count-1; i++)
	{
		dest->data[i] = dest->data[i + 1];
	}
	dest->count--;
	printf("��ɾ����\n");
}
//����ĳ���˵���Ϣ
void search_message(peomes* dest)
{
	printf("������Ҫ���ҵ�������");
	char name[20];
	scanf("%s", name);
	int i = search_people(dest, name);
	if (i == -1)
	{
		printf("δ�鵽������Ϣ�������²���.\n");
		return;
	}
	printf("%20s\t%5s\t%5s\t%15s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%20s\t%5d\t%5s\t%15s\t%20s\n", dest->data[i].name,
		dest->data[i].age,
		dest->data[i].sex,
		dest->data[i].tele,
		dest->data[i].place); 
}
//�޸�ĳ����Ϣ
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
	printf("�������Ա�:");
	scanf("%s", dest->data[i].sex);
	printf("������绰:");
	scanf("%s", dest->data[i].tele);
	printf("�������ַ:");
	scanf("%s", dest->data[i].place);
}