#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//static int g_val = 2021;
//???static?��??��??????????�i??????????????�a�k?????????????
//int Add(int x, int y)
//{
//	return x + y;
//}
//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//	a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//	b.�´��ˣ�����߲´��˻��С�ˣ�����ֱ���¶�
//3.��Ϸ����һֱ�棬�����˳���Ϸ
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
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("������\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
		}
	} while (input);
	
	return 0;
}