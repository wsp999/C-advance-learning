#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
int find_num(int arr[3][3], int r, int c, int k)
{
	int i = 0, j = 2;
	for (i = 0; i < 3; i++)
	{
		if (arr[i][j] == k)return 1;
		else if (arr[i][j] < k);
		else if (arr[i][j] > k)
		{
			for (j = 2; j >= 0;j-- )
			{
				if (arr[i][j] == k) return 1;
			}
			return 0;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int ret = find_num(arr, 3, 3, k);
	printf("%d\n", ret);

}