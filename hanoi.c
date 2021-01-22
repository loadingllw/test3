#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count = 0;
int hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("��%d����%c-->%c ��%d��\n",n, x, z,++count);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		printf("��%d����%c-->%c ��%d��\n",n,x,z,++count);
		hanoi(n - 1, y, x, z);
    }
}




int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}



