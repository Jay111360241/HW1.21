#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("Input three integers:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		if (b > c)
		{
			printf("%d is the largest, %d is the smallest.\n", a, c);
		}
		if (b < c)
		{
			if (a > c)
			{
				printf("%d is the largest, %d is the smallest.\n", a, b);
			}
			if (a < c)
			{
				printf("%d is the largest, %d is the smallest.\n", c, b);
			}
		}
	}
	if (a < b)
	{
		if (b > c)
		{
			if (a > c)
			{
				printf("%d is the largest, %d is the smallest.\n", b, c);
			}
			if (a < c)
			{
				printf("%d is the largest, %d is the smallest.\n", b, a);
			}
		}
		if (b < c)
		{
			printf("%d is the largest, %d is the smallest.\n", c, a);
		}
	}
	system("pause");
	return 0;
}