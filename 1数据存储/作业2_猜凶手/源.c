#define _CRT_SECURE_NO_WARNINGS
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。xiongshou!='A';
//B说：是C。xiongshou='A'
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
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