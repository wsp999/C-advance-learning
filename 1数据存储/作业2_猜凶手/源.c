#define _CRT_SECURE_NO_WARNINGS
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�xiongshou!='A';
//B˵����C��xiongshou='A'
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
#include<stdio.h>
int main()
{
	char xiongshou = 'A';
	int untrue = 0;
	int true = 0;
	while (1)
	{
		true = 0;
		if (xiongshou != 'A') true++;
		if (xiongshou == 'C') true++;
		if (xiongshou == 'D') true++;
		if (xiongshou != 'D') true++;
		if (true == 3) break;
		else xiongshou++;
	}
	printf("%c", xiongshou);

}