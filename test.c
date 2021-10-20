#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//		return 0;
////}
//int main(void)
//{
//	printf("%d\n", 15 - 37);
////	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	     scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("\nmax=%d\n", max);
//	return 0;
//}
#include<string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	printf("c:\test\test.c");
//	printf("ab\ncd");
//	printf("\a");
//	printg(
//	)
//	return 0;
//}
//int main()
//{
//	//printf("%c\n", '\101');
//	printf("%c\n", '\x30');
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("坚持学代码\n");
//	printf("成功或失败(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("找到工作\n");
//	else
//		printf("打工人\n");
//
//    
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[15] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int x = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", x);
//	return 0;
//}
//int main()
//{

	//int a = 10;
	//int b = a++;//后置++ - 先使用，后++
	//printf("%d\n", b);
	//printf("%d\n", a);
	//int a = 10;
	//int b = ++a;//前置++ - 先++，后使用
	//printf("%d\n", b);
	//printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 3.14;//不同类型转换，会警告丢失数据
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 9;
//	int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	max = a > b ? a : b;//用条件操作符（三目操作符）表达上面的简单情况，复杂情况不要使用
//	printf("%d\n", max);
//	return 0;
//}
//typedef unsigned int u_int;//重新定义一个类型，可用于简化
//
//int main()
//{
//	unsigned int num = 100;
//	u_int mun = 100;
//	return 0;
//}
//void test()
//{
//	int a = 1;//打印结果为2 2 2 2 2 2 2 2 2 2
//	a++;
//	printf("%d ", a);
//}
//void test()
//{
//	static int a = 1;//打印结果为2 3 4 5 6 7 8 9 10 11
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern 声明外部符号
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#define MAX 1000//define定义的常量
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
//#define Add(X,Y) ((X)+(Y))//define定义的宏
//int main()
//{
//	//如果上面define定义的宏不想当成一个普通的变量，而是需要定义为表达式，则需要用（）分别囊括起来
// printf("%d\n", 4*Add(2, 3));
//	return 0;
//}
//