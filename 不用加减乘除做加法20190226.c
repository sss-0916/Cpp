#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	while (b != 0)
	{
		// temp = a + b����λ�ӷ�
		int temp = a ^ b;
		// bΪ��λ
		b = (a & b) << 1;
		a = temp;
	}
	return a;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("Please input a and b: \n");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, add(a, b));
	system("pause");
	return 0;
}