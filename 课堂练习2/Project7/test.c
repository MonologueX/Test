#define _CRT_SECURENO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

//int main()
//{
//	/*int age = 20;
//	if (age >= 18 && age <30)
//	{
//		printf("����");
//	}
//	else if (age < 18)
//	{
//		printf("δ����");
//	}
//	else
//	{
//		printf("������");
//	}*/
//	/*int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b = 2)
//		{
//			printf("hehe");
//		}
//		else
//		{
//			printf("haha");
//		}
//	}*/
//	int flag = 0;
//	int j = 0;
//	int i = 0;
//	char a[] = "erty";
//	char b[] = "dsvbhbs";
//	int x = 0;
//	int y = 0;
//	if (x > 0)
//	{
//		y = 1;
//	}
//	else if (x == 0)
//	{
//		y = 0;
//	}
//	else
//	{
//		y = -1;
//	}
//	for (x = 1; x <= 100; x += 2){
//		printf("%d ", x);
//	}
//	printf("\n");
//	x = sizeof(a);
//	y = sizeof(b);
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			if (a[i] == b[j])
//			{
//				flag = 1;
//				printf("%c ", a[i]);
//				break;
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("û��");
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int j = 0;
	int i = 0;
	char a[] = "erty";
	char b[] = "dsvbhbs";
	int x = 0;
	int y = 0;

	x = sizeof(a);
	y = sizeof(b);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			if (a[i] == b[j])
			{
				printf("��");
				system("pause");

				return 0;
			}
		}
	}
	printf("û��");

	system("pause");
	return 0;
}