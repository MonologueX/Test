#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int main()
{
	int j = 0;
	int i = 0;
	int a[] = { 1, 2, 3, 4 };
	int b[] = { 1, 5, 6, 7, 8 };
	int x = 0;
	int y = 0;

	x = sizeof(a);
	y = sizeof(b);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			;
			if (a[i] == b[j])
			{
				printf("сп");
				system("pause");
				return 0;
			}
		}
	}
	printf("ц╩сп");
	system("pause");
	return 0;
}