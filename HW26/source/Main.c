#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("Input two integers:");
	scanf_s("%d%d", &a, &b);
	if (a%b == 0)
	{
		printf("%d is the multiple of %d\n", a, b);
	}
	if (a%b != 0)
	{
		printf("%d is not the multiple of %d\n", a, b);
	}
	system("pause");
	return 0;
}