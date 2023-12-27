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
		printf("请输入您想要的操作：");
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
			printf("程序结束。\n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
		}
	} while (input);
}