#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>//time函数所需头文件
#include <stdlib.h>//srand,rand函数所需头文件
//static int g_val = 2021;
//C语言中static是用来修饰变量和函数的
//static int Add(int x, int y)
//{
//	return x + y;
//}
//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//	a.猜对了，就恭喜你，游戏结束
//	b.猜错了，会告诉猜大了或猜小了，继续直到猜对
//3.游戏可以一直玩，除非退出游戏
//void menu()
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	//rand函数返回一个0-32767之间的数字
//
//	int ret = rand() % 100 + 1;//%100的余数是0-99，然后+1，范围就是1-100
//	/*printf("%d\n", ret);*/
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//time函数-时间戳(时间换算成以秒为单位的数值)
//	srand((unsigned int)time(NULL));//unsigned强制转换为srand函数需要的类型
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}