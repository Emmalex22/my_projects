#include <stdio.h>
// A function that calculates the sum of an array and stores it in another array

int main(void)
{
	int arr1[5];
	int i, sum = 0, arr2[5];
	printf("Enter array elements\n");
	for(i = 0; i < 5; i++)
		scanf("%i", &arr1[i]);
	for(i = 0; i < 5; i++)
	{
		sum = sum + arr1[i];
		arr2[i] = sum;
	}
	printf("sum array:\n");
	for(i = 0; i < 5; i++)
		printf("%i\n", arr2[i]);
}