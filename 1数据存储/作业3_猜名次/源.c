#define _CRT_SECURE_NO_WARNINGS
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ����� b d a e c
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//�������ַ������ʾ
#include<stdio.h>
#include<string.h>
int chongfu(char* arr)
{
	int p[5] = { 0 };  //abcde�ֱ�ռp0 p1 p2 p3 p4���ظ�ʱ�����ȥ��λ���Ѿ���1˵���ظ�
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

					
	
			   
			