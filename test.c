#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>//sqrt函数 
#include <stdlib.h>//system,srand,rand函数所需头文件
#include<string.h>//strlen,strcmp函数所需头文件
#include<windows.h>//Sleep函数所需头文件
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
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	ret = 1;//计算n的阶乘之前，把ret初始为1
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret *= i;
//	//	}
//	//	sum += ret;
//	//}	
//	 for (n = 1; n <= 3; n++)
//	{
//		ret *=n
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)//查找范围去掉左边一半
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)//查找范围去掉右边一半
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to my home!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒(1000毫秒)，需要windows头文件
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//	int password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
////		if(password == "123456")//err - 两个字符串比较，不能使用==，应该使用strcmp
//		if (strcmp(password, "123456") == 0)//strcmp也需要头文件string.h
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序");
//	return 0;
//}
//int main()
//{
//	int m, n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是:%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}
//辗转相除法
//int main()
//{
//	int m, n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	while(i = m % n)
//	{
//		m = n;
//		n = i;
//	}
//	printf("最大公约数:%d\n", n);
//	return 0;
//}
//int main()
//{
//	int m, n, i, max = 0;
//	scanf("%d%d", &m, &n);
//	max = m * n;
//	while (i = m % n)
//	{
//		m = n;
//		n = i;
//	}
//	printf("最小公倍数:%d\n", max/n);
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//if (y % 4 == 0)
//		//{
//		//	if (y % 100 != 0)
//		//	{
//		//		printf("%d ", y);
//		//		count++;
//		//	}
//		//}
//		//if (y % 400 == 0)
//		//{
//		//	printf("%d ", y);
//		//	count++;
//		//}
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount:%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i，看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		//for (j = 2; j < i; j++)
//		//sqrt - 是开平方的函数 - 需要引用头文件math.h
//		//假设m = a * b
//		//a和b中一定至少有一个数字是 <= m的开平方
//		//例: 16 = 2 * 8 =4 * 4
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入:No，就取消关机
//shutdown -s -t 60 (60秒后关机）
//shutdown -a （取消关机）

//int main()
//{
//	char input[20] = { 0 };
//	//关机
//	//C语言提供了一个函数:system() - 执行系统命令
//	system("shutdown -s -t 60");
////again:
////	printf("请注意，你的电脑将在1分钟内关机，如果输入:No，就取消关机\n");
////	scanf("%s", input);
////	if (strcmp(input , "No") == 0)
////	{
////		system("shutdown -a");
////	}
////	else
////	{
////		goto again;
////	}
//	while (1)
//	{
//		printf("请注意，你的电脑将在1分钟内关机，如果输入:No，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "No") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}