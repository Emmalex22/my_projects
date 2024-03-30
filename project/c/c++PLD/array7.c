#include <stdio.h>
//A function that calculates the sum of rows and columns of a matrix

int main(void)
{
	int i, j, sum, arr[3][3];
	int sumCol, sumRow;
	printf("Enter array elements\n");
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

	for(i=0; i<3; i++)
	{
		sum = 0;
		printf("\n");
		sumRow = sumCol = 0;
		for(j=0; j<3; j++)
		{
			sumRow += arr[i][j];
			sumCol += arr[j][i];
		}
		printf("sum of rows is %i, and sum of columns is %i\n", sumRow, sumCol);
	}
}