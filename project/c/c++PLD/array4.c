#include <stdio.h>
/*A function that reads an array at compile time and calculates the sum of the elements of the array*/
int main(void)
{
	int arr[5];
	int i, sum = 0;
	printf("Enter elements of array\n");
	for(i = 0; i < 5; i++)
		scanf("%i", &arr[i]);
	for(i = 0; i < 5; i++)
	{
		printf("\n%i", arr[i]);
		sum = sum + arr[i];
	}
	printf("\n");
	printf("sum of array = %i\n", sum);

}