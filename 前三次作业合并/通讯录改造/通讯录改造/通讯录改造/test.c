#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
int main()
{
	int input = 0;
	peomes contact = { 0 };
	init_message(&contact);//��ʼ�������ռ�
	do
	{
		menu();
		printf("�����������");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add_message(&contact);
			break;
		case 2:
			show_message(&contact);
			break;
		case 3:
			search_message(&contact);
			break;
		case 4:
			delete_message(&contact);
			break;
		case 5:
			change_messsage(&contact);
			break;
		case 6:
			qsort_message(&contact);
			break;
		case 0:
			save_message(&contact);
			exit_neicun(&contact);
			printf("�����˳���\n");
			break;
		}
	} while (input);
}
