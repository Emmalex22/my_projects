#include <stdio.h>
//A function that reads and prints a two dimensional array in matrix form

int main(void)
{
	int arr[3][3];
	int i, j;
	printf("Enter array elements:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%i", &arr[i][j]);

		}
	}
	for(i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%i\t", arr[i][j]);
			
		}
	}
	printf("\n");
}