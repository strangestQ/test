#define _CRT_SECURE_NO_WARNING

#include<stdio.h>

//结构体
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu//这里的 Stu 为创建的类型
//{
//	//成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}s1, s2;//s1和s2也是结构体变量
//s1,s2是全局变量
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30,"20211113" };// s 为创建的对象
//	//s是局部变量
//	// . ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}
//结构体传参
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "20211113" };
//	//写一个函数，打印s的内容
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//代码运行结果会进入死循环，因为调试时发现i和arr[12]的地址恰巧相同，所以i永远不会大于12
//	//1.i和arr是局部变量
//	//  局部变量是放在栈区上的
//	//  栈区内存的使用习惯是：
//	//  先使用高地址空间，再使用低地址空间
//	//2.数组随着下标的增长，地址是由低到高变化的
//	return 0;
//}
//模拟实现strcpy - 字符串拷贝
void my_strcpy(char* dest, char* src)
{
	//while (*src != '\0')
	//{
	//	*dest = *src;
	//	dest++;
	//	src++;
	//}
	//*dest = *src;
	//优化方案1
	//while (*src != '\0')
	//{
	//	*dest++ = *src++;
	//}
	//*dest = *src;
	//优化方案2
	while (*dest++ = *src++)//即拷贝了'\0'，又使得循环停止
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	//strcpy(arr1, arr2);
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}