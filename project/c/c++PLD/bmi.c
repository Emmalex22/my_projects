#include <stdio.h>

/*Programme calculates the bmi of an individual and categorizes them*/
int main(void)
{
	float weight, height;
	float bmi;
	/*Accepting weight in kg and height in m*/
	printf("Weight in kg:\n");
	scanf("%f", &weight);
	printf("Height in m\n");
	scanf("%f", &height);
	bmi = weight / (height * height);
	if (bmi <= 18.5)
		printf("your bmi is %.2f and you are underweight\n", bmi);
	else if (bmi >= 18.5 && bmi <= 25.0)
		printf("your bmi is %.2f and you are normal\n", bmi);
	else if (bmi >= 25.0 && bmi <= 29.9)
		printf("your bmi is %.2f and you are overweight\n", bmi);
	else if (bmi >= 30.0)
	{
		if (bmi >= 30.0 && bmi <= 34.9)
			printf("your bmi is %.2f and you belong to class I obesity group\n", bmi);
		else if (bmi >= 35.0)
			printf("your bmi is %.2f and you belong to class II obesity group\n", bmi);
		else
			printf("your bmi is %.2f and you belong to class III obesity group\n", bmi);
	}
	return (0);
}