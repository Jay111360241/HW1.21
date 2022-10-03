#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Input a integer:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d is an even number.\n", a);
	}
	if (a % 2 != 0)
	{
		printf("%d is an odd number.\n", a);
	}
	system("pause");
	return 0;
}