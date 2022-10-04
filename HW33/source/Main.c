#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;
	int d, e;
	printf("Total miles driven per day:");
	scanf_s("%f", &a);
	printf("Cost per gallon of gasoline:");
	scanf_s("%f", &b);
	printf("Average miles per gallon:");
	scanf_s("%f", &c);
	printf("Parking fees per day:");
	scanf_s("%d", &d);
	printf("Tolls per day:");
	scanf_s("%d", &e);
	printf("Total money:%f\n", a / c * b + d + e);
	system("pause");
	return 0;
}