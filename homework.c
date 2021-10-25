#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//新明解C言語入門演習1-1
//int main()
//{
//
//	printf("15から37を引いた値は%dです。\n", 15 - 37);
//	return 0;
//}
//新明解C言語入門演習1-2
//int main()
//{
//	printf("守\n破\n離\n");
//	return 0;
//}
//新明解C言語入門演習1-3
//int main()
//{
//	printf("こんにちは。\nお元気ですか。\n\nさようなら。\n");
//
//	return 0;
//}
//新明解C言語入門演習1-4
//int main()
//{
//	int x = 3.14;
//	printf("xの値は%dで。\n", x);
//	return 0;
//}
//新明解C言語入門演習1-5
//int main()
//{
//	int no;
//	printf("整数を入力してください：");
//	scanf("%d",&no);
//	printf("%dに13を加えると%dです。\n", no, no + 13);
//	return 0;
//}
//新明解C言語入門演習1-6
//int main()
//{
//	int no;
//	printf("整数を入力してください：");
//	scanf("%d",&no);
//	printf("%dから7減じると%dです。\n", no, no - 7);
//	return 0;
//}
//新明解C言語入門演習1-7
//int main()
//{
//	puts("守");
//	puts("破");
//	puts("離");
//	return 0;
//}
//新明解C言語入門演習1-8
//int main()
//{
//	int n1, n2;
//	puts("二つの整数を入力してください。");
//	printf("整数n1:"); scanf("%d", &n1);
//	printf("整数n2:"); scanf("%d", &n2);
//	printf("それらの積は%dです。\n", n1 * n2);
//	return 0;
//}
//新明解C言語入門演習1-9
//int main()
//{
//	int n1, n2, n3;
//	puts("三つの整数を入力してください。");
//	printf("整数n1:"); scanf("%d", &n1);
//	printf("整数n2:"); scanf("%d", &n2);
//	printf("整数n3:"); scanf("%d", &n3);
//	printf("それらの和は%dです。\n", n1 + n2 + n3);
//	return 0;
//}
//新明解C言語入門演習2-1
//int main()
//{
//	int x, y;
//	puts("二つの整数を入力せよ。");
//	printf("整数x:"); scanf("%d", &x);
//	printf("整数y:"); scanf("%d", &y);
//	printf("xの値はyの%d%%です。\n", 100 * x / y);
//	return 0;
//}
//新明解C言語入門演習2-2
//int main()
//{
//	int a, b;
//	puts("二つの整数を入力せよ。");
//	printf("整数a:"); scanf("%d", &a);
//	printf("整数b:"); scanf("%d", &b);
//	printf("それらの和は%dで積は%dです。\n",a+b,a*b);
//
//	return 0;
//}
//新明解C言語入門演習2-3
//int main()
//{
//	double a;
//	printf("実数を入力せよ:"); scanf("%lf", &a);
//	printf("あなたは%fと入力しましたね。\n", a);
//	return 0;
//}
//新明解C言語入門演習2-4
//int main()
//{
//	int a;
//	double b;
//	printf("a="); scanf("%d", &a);
//	printf("b="); scanf("%lf", &b);
//	printf("a+b=%f\n", a + b);
//	printf("a-b=%f\n", a - b);
//	printf("a*b=%f\n", a * b);
//	printf("a/b=%f\n", a / b);
//	return 0;
//}
//新明解C言語入門演習2-5
//int main()
//{
//	int x, y;
//	puts("二つの整数を入力せよ。");
//	printf("整数x:"); scanf("%d", &x);
//	printf("整数y:"); scanf("%d", &y);
//	printf("xの値はyの%f%%です。\n", (double)100 * x / y);
//	return 0;
//}
//新明解C言語入門演習2-6
//int main()
//{
//	int a;
//	printf("身長を入力せよ:"); scanf("%d", &a);
//	double b=(a - 100) * 0.9;
//	printf("標準体重は%3.1fです。\n", b);
//    return 0;
//}