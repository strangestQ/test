#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}
//指针类型的意义
//1.指针解引用时的访问权限有多大
//2.指针向前或向后走一步，能有多大(距离)
//int main()
//{
//	//int a = 0x11223344;
//	////int* pa = &a;
//	////*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		//p+i 其实是下标为i的元素的地址
//	}
//	return 0;
//}
//野指针
//int main()
//{
//	//1.指针未初始化
//	//这里的p就是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存
//	//2.越界访问
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	return 0;
//}
//3.指针指向的空间释放
//int test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;
//	return 0;
//}
//指针的运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)//指针的关系运算
//	{
//		printf("%d\n", *p);
//		p++;//指针的整形运算
//	}
//	return 0;
//}
//指针和指针运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", &arr[9] - &arr[0]);//9
//	//指针-指针得到的是，两个指针之间的元素个数
//	//指针和指针相减的前提:
//	//两个指针指向同一块空间
//	char c[5];
//	printf("%d\n", &arr[9] - &c[0]);//err
//	return 0;
//}
//计数器方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//指针-指针方法
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//print("%p\n", arr);//数组名是数组首元素的地址
//	//print("%p\n", &arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[arr]);
//	printf("%d\n", 2[p]);
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	int** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	//ppa就是一个二级指针变量
//	//**ppa == a
//	return 0;
//}
//指针数组 - 数组
//int main()
//{
//	int arr[10];//整形数组 - 存放整形的数组就是整形数组
//	char ch[5];//字符数组 - 存放的是字符
//	int* parr[5];//存放整形指针的数组
//	char* pch[5];
//	return 0;
//}