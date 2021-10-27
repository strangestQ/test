#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//static int g_val = 2021;
//???static???聊????????????????????????萢鋕?????????????
//int Add(int x, int y)
//{
//	return x + y;
//}
//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//	a.猜对了，就恭喜你，游戏结束
//	b.猜错了，会告诉猜大了或猜小了，继续直到猜对
//3.游戏可以一直玩，除非退出游戏
void menu()
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("猜数字\n");
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}
	} while (input);
	
	return 0;
}