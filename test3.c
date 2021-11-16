#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

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
//void my_strcpy(char* dest, char* src)
//{
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;
//	//优化方案1
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;
//	//优化方案2
//	while (*dest++ = *src++)//即拷贝了'\0'，又使得循环停止
//	{
//		;
//	}
//}
//深度优化
//2.const 修饰变量，之歌变量就被称为常变量，不能被修改，但本质上还是变量
//strcpy 这个库函数，其实返回的是目标空间的起始地址
//char my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//1.断言assert - 判断表达式为假报错，为真继续 - 需要引头文件assert.h
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
////const修饰指针变量时
////const 如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
////      但是指针变量本身p是可以修改的
////      如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
////      但是指针指向的内容，可以被改变
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));//函数的链式访问
//	return 0;
//}
//size_t my_strlen(const char* str)//size_t 无符号整形类型
////int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	//int count = 0;
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "abcdef";
//	printf("%d\n", my_strlen(ch));
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6,a=6
//	b = ++c, c++, ++a, a++;//c=8,a=8,b=7
//	b += a++ + c;//a=9,b=23
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}
//int Numberof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((n>>i) & 1) == 1)
//	//	{
//	//		count++;
//	//	}
//	//}
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
// //写一个代码判断一个数字是不是2的n次方
// //2的n次方的十字，其中只有一个1
// //如果 k & (k-1) == 0 ，那么k就是2的n次方
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Numberof1(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int Numberof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((m >> 1) & 1) != ((n >> 1) & 1))
//	//	{
//	//		count++;
//	//	}
//	//}
//	int ret = m ^ n;//异或 - 相同为0，相异为1
//	count = Numberof1(ret);
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的2进制中的奇数位和偶数位
//	int i = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	putchar('\n');
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}
//写代码将一句话的单词进行倒置，标点不倒置。例I like bejing.经过函数后变为bejing. like I
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	//scanf("%s", &arr);//无法读取有 空格 的字符串
	gets(arr);//将输入的字符串复制到（）中的地址去
	//三步翻转法
	//1.字符串整体翻转
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2.每个单词逆序
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}