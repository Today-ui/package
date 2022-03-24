#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++");
	printf("%s\n", b1.name);
	/*struct Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/
	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/
	/*printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	*/
	return 0;
}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//
//	printf("%d\n", sizeof (pc));
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define Max(X,Y)(X>Y?X:Y)
//
//int main()
//
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}


//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int a = 0;
//	while (a<5)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}