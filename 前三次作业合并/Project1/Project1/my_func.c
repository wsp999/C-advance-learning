#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
void menu()
{
	printf("*************************************\n");
	printf("*********1.���        2.չʾ********\n");
	printf("*********3.ɾ��        4.����********\n");
	printf("*********5.�޸�        6.����********\n");
	printf("*********       0.�˳�       ********\n");
	printf("*************************************\n");
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
void show_message(peomes* dest)
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
	int i=0;
	i=search_message(dest,)
}