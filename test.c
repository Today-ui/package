#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);*/
	
	return 0;
}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++, n++;break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
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
//	default:
//		printf("�������!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	/*while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("�����������\n");
//	else
//		printf("�������������\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5==num)
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int age=0 ;
//	printf("���������䣺");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//		
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else
//			printf("����\n");
//	}
//	return 0;
//}