#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define SQUARE(X) ((X)*(X))//定义宏
//int main()
//{
//	int r = SQUARE(5+1);
//	printf("%d\n", r);
//	return 0;
//}

//#
//#define PRINT(N) printf("the value of "#N" is %d\n",N)
//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT"\n",N);
//int main()
//{
//	int a = 10;
//	//PRINT(a);
//	PRINT(a, "%d");
//	//PRINT(b);
//	float b = 3.14;
//	PRINT(b, "%.2f");
//}

//##
//#define CAT(class,Num) class##Num
//int main()
//{
//	int class5 = 5;
//	printf("%d\n", CAT(class, 5));
//	printf("%d\n", class5);
//	return 0;
//}

//优先级问题与副作用#define MAX(x,y) (((x)>(y))?(x):(y))

//#undef name
//#define M 100
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	int M = 12;
//	printf("%d\n", M);
//}

//#if与#endif
int main()
{
#if 0
	printf("hello world\n");
#endif
	return 0;
}