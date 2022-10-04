#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float h, w, BMI;
	printf("Input your height(cm) and weight(kg):");
	scanf_s("%f%f", &h, &w);
	BMI = w / h / h * 100 * 100;
	printf("Your BMI is %f\n", BMI);
	if (BMI <= 18.5)
	{
		printf("Underweight\n");
	}
	if (18.5 < BMI && BMI <= 24.9)
	{
		printf("Normal\n");
	}
	if (25 <= BMI && BMI <= 29.9)
	{
		printf("Overweight\n");
	}
	if (30 <= BMI)
	{
		printf("Obese\n");
	}
	system("pause");
	return 0;
}