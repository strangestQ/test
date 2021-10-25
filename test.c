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
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
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
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫做指针变量
//    //* 说明pa是指针变量
//	//int 说明pa执行的对象是int(整形）
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* 解引用操作 - *pa就是通过pa里面的地址，找到a
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//struct Stu//创建了一个学生的类型
//{
//	char name[20];//结构体中的成员变量
//	int age;
//	double score;
//};
//struct Book//创建了一个书的类型
//{
//	char name[20];
//	int price;
//	double id[30];
//};
//int main()
//{
//	struct Stu s = { "张三",20,85.5 };//结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	return 0;
//}
//int main()
//{
//	int age = 70;
//	if (age < 18)
//		printf("少年\n");
//	//else if (18 <= age < 26)//错误写法，逻辑错误
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	//if (age >= 18)
//	//	printf("成年\n");
//	//else
//	//{
//	//	printf("未成年\n");
//	//	printf("不能谈恋爱\n");
//	//}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//for(a = 1;a <= 100;a++)
//	//{
//	//	if (a % 2 == 1)
//	//		printf("%d ", a); 
//	//}
//	for (a = 1; a <= 100; a+=2)
//	{
//		printf("%d ", a);
//	}
//     return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//        a += 2;
//	}
//     return 0;
//}
//int main()
//{
//	int ch = 0;
//	//getchar - 读取一个字符或一个标准输入（键盘）
//	//读取错误是，返回是一个EOF。
//	//EOF - end of file  文件的结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		//putchar - 打印字符
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//此处的password为数组，所以前面不需要&
//	printf("请确认密码呢Y/N:>");
//	//scanf不会从缓冲区拿走\n，之后会被getchar读取，所以getchar不会等待
//	//需要清理缓冲区
//	//getchar();//处理\n
//	//清理缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')// '||'- 或者
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}