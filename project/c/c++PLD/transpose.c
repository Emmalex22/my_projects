#include <stdio.h>
//A function that prints the transpose of a matrix

int main(void)
{
	int i, j, arr[3][3];
	printf("Enter array Elements\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%i", &arr[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("%i\t", arr[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("%i\t", arr[j][i]);
		}
	}
	printf("\n");
}