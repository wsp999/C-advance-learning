#define _CRT_SECURE_NO_WARNINGS
#include "my_func.h"
int main()
{
	int input = 0;
	peomes src;
	chushihua(&src);
	do
	{
		menu();
		printf("����������Ҫ�Ĳ�����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			message_add(&src);
			break;
		case 2:
			show_message(&src);
			break;
		case 3:
			delete_message(&src);
			break;
		case 4:
			search_message(&src);
			break;
		case 5:
		    c_message(&src);
			break;
		case 6:
			break;
		case 0:
			printf("���������\n");
			break;
		default:
			printf("����������������룺\n");
		}
	} while (input);
}