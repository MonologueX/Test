#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
	/*int ch;
	while((ch = getchar()) != EOF)
	{
		;
	}*/
	char input[10] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("电脑将在2分钟关机，如果输入我是猪取消关机\n");
	scanf("%s", input);
	if (strcmp("我是猪", input) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	system("pause");
	return 0;
}
//int main()
//{
//flag:
//	printf("haha");
//	goto flag;
//	/*int choice;
//	scanf("%d", &choice);
//	switch (choice)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二 ");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	case 8:
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}*/
//	/*float a,b,c = 0;
//	float x1, x2 = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	if (0 == a)
//	{
//		printf("不是一元二次方程组");
//	}
//	else
//	{
//		if (0 == b*b - 4 * a*c)
//		{
//			printf("x1 = x2 = %f\n", (-b)/(2*a));
//		}
//		else if (0 < b*b - 4 * a*c)
//		{
//			printf("x1=%f x2=%f", (-b + sqrt(b*b - 4 * a*c)) / (2 * a), (-b - sqrt(b*b - 4 * a*c)) / (2 * a));
//		}
//		else
//		{
//			printf("无解");
//		}
//	}*/
//	/*double i = 20.0;
//	double j = i / 7.0;
//	if (j * 7.0 == i)
//	{
//		printf("equal");
//	}
//	else
//	{
//		printf("not equal");
//	}*/
//	/*int flag = 1;
//	if (flag)
//	{
//
//	}
//	if (!flag)
//	{
//
//	}
//	int age = 0;
//	if (0 == age)
//	{
//		
//	}*/
//	//int num = 10;
//	////&num
//	//int *p;
//	//if (p != NULL)
//	//{
//	//	*p = 20;
//	//}
//	/*int *p = NULL;
//	if (p != NULL)
//	*p = 20;*/
//
//	system("pause");
//	return 0;
//}