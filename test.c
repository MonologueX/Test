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
	printf("���Խ���2���ӹػ����������������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp("������", input) == 0)
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ� ");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	case 8:
//		break;
//	default:
//		printf("�������");
//		break;
//	}*/
//	/*float a,b,c = 0;
//	float x1, x2 = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	if (0 == a)
//	{
//		printf("����һԪ���η�����");
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
//			printf("�޽�");
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