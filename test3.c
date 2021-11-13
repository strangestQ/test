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