//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int wei[10] = { 0 };
//    long long int a = 0;
//    scanf("%d", &a);
//    int b = 0, num = 10,ret=0;
//    for (; num > 0; num--)
//    {
//        if (a / (int)pow(10, num) != 0) break;
//    }
//    num = num + 1;
//    int num_1 = num;
//    while (num--)
//    {
//        wei[b++] = (a%10)%2;//数组第n个存第n位
//        a = a / 10;
//    }
//    for (int j = 0; j < num_1; j++)
//    {
//        ret = ret+wei[j] * (int)pow(10, j);
//    }
//    printf("%d", ret);
//}
#include <stdio.h>
int main()
{
    int lie = 0;
    scanf("%d", lie);
    int j = 0;
    for (int i = 0; i < lie; i++)
    {
        for (j = 0; j < lie; j++)
        {
            if (j < lie - i - 1) printf("  ");
            else printf(" *");
        }
        printf("\n");
    }
}