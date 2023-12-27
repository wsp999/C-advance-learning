#define _CRT_SECURE_NO_WARNINGS
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三； b d a e c
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//名次用字符数组表示
#include<stdio.h>
#include<string.h>
int chongfu(char* arr)
{
	int p[5] = { 0 };  //abcde分别占p0 p1 p2 p3 p4有重复时如果该去的位置已经有1说明重复
	int i = 0;
	for (; i < 5; i++)
	{
		if (p[arr[i] - 'A'] == 1) return 0;
		p[arr[i] - 'A'] = 1;
	}
	return 1;
}
int main()
{
	char arr[6] = "BDAEC";
	int i = 0, j = 0;
	char tep = 0;
	for (arr[0] = 'A'; arr[0] <='E'; arr[0]++)
	{
		for (arr[1] = 'A'; arr[1] <='E'; arr[1]++)
		{
			for (arr[2] = 'A'; arr[2] <='E'; arr[2]++)
			{
				for (arr[3] = 'A'; arr[3] <='E'; arr[3]++)
				{
					for (arr[4] = 'A'; arr[4]<='E'; arr[4]++)
					{
						if ((arr[1] == 'B'+ arr[2] == 'A')== 1 &&
							(arr[1] == 'B') + (arr[3] == 'E')== 1 &&
							(arr[0] == 'C') + (arr[1] == 'D')== 1 &&
							(arr[4] == 'C') + (arr[2] == 'D')== 1 &&
							(arr[3] == 'E') + (arr[0] == 'A')== 1 &&
							chongfu(arr))
						{
							printf("%s\n", arr);
						}
					}
				}
			}
		}
	}
}

					
	
			   
			