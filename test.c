#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>//strlen,strcmp��������ͷ�ļ�
#include<windows.h>//Sleep��������ͷ�ļ�
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
//	printf("���ѧ����\n");
//	printf("�ɹ���ʧ��(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("�ҵ�����\n");
//	else
//		printf("����\n");
//
//    
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
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
	//int b = a++;//����++ - ��ʹ�ã���++
	//printf("%d\n", b);
	//printf("%d\n", a);
	//int a = 10;
	//int b = ++a;//ǰ��++ - ��++����ʹ��
	//printf("%d\n", b);
	//printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 3.14;//��ͬ����ת�����ᾯ�涪ʧ����
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
//	max = a > b ? a : b;//����������������Ŀ���������������ļ���������������Ҫʹ��
//	printf("%d\n", max);
//	return 0;
//}
//typedef unsigned int u_int;//���¶���һ�����ͣ������ڼ�
//
//int main()
//{
//	unsigned int num = 100;
//	u_int mun = 100;
//	return 0;
//}
//void test()
//{
//	int a = 1;//��ӡ���Ϊ2 2 2 2 2 2 2 2 2 2
//	a++;
//	printf("%d ", a);
//}
//void test()
//{
//	static int a = 1;//��ӡ���Ϊ2 3 4 5 6 7 8 9 10 11
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
//extern �����ⲿ����
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
//#define MAX 1000//define����ĳ���
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
//#define Add(X,Y) ((X)+(Y))//define����ĺ�
//int main()
//{
//	//�������define����ĺ겻�뵱��һ����ͨ�ı�����������Ҫ����Ϊ���ʽ������Ҫ�ã����ֱ���������
// printf("%d\n", 4*Add(2, 3));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa����ָ�����
//    //* ˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int(���Σ�
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//* �����ò��� - *pa����ͨ��pa����ĵ�ַ���ҵ�a
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
//struct Stu//������һ��ѧ��������
//{
//	char name[20];//�ṹ���еĳ�Ա����
//	int age;
//	double score;
//};
//struct Book//������һ���������
//{
//	char name[20];
//	int price;
//	double id[30];
//};
//int main()
//{
//	struct Stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
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
//		printf("����\n");
//	//else if (18 <= age < 26)//����д�����߼�����
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	//if (age >= 18)
//	//	printf("����\n");
//	//else
//	//{
//	//	printf("δ����\n");
//	//	printf("����̸����\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//	//getchar - ��ȡһ���ַ���һ����׼���루���̣�
//	//��ȡ�����ǣ�������һ��EOF��
//	//EOF - end of file  �ļ��Ľ�����־
//	while ((ch = getchar()) != EOF)
//	{
//		//putchar - ��ӡ�ַ�
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�˴���passwordΪ���飬����ǰ�治��Ҫ&
//	printf("��ȷ��������Y/N:>");
//	//scanf����ӻ���������\n��֮��ᱻgetchar��ȡ������getchar����ȴ�
//	//��Ҫ��������
//	//getchar();//����\n
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')// '||'- ����
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
//	//	ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼΪ1
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
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������в���k(7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)//���ҷ�Χȥ�����һ��
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)//���ҷ�Χȥ���ұ�һ��
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//		Sleep(1000);//˯��1��(1000����)����Ҫwindowsͷ�ļ�
//		system("cls");//�����Ļ
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
//	//������ȷ���������ַ���"123456"
//	int password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
////		if(password == "123456")//err - �����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		if (strcmp(password, "123456") == 0)//strcmpҲ��Ҫͷ�ļ�string.h
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����");
//	return 0;
//}
