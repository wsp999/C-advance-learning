#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("请输入要打印多少行杨辉三角:");
	int h = 0;
	scanf("%d", &h);
	int a[100][100] = {0};
	int num_a = 0;
	int i = 0, j = 0;
	for (i; i < h; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				a[i][j] = 1;
				printf("%d ", a[i][j]);
				if (i == 0) printf("\n");
			}
			else if (j == i)
			{
				a[i][j] = 1;
				printf("%d\n", a[i][j]);
			}
			else
			{
				a[i][j] = a[i-1][j-1] + a[i-1][j];
				printf("%d ", a[i][j]);
			}
		}
	}
	
}