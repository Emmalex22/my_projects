#include <stdio.h>
//A programme that sums two matrixes and stores the sum in a a new matrix
int main(void)
{
	int a[2][3], b[2][3], c[2][3], i, j;
	
	printf("Enter elements of first array:\n");
	//read first array from standard input
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%i", &a[i][j]);
		}
	}
	printf("Enter elements of second array:\n");
	//read second array from standard input
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%i", &b[i][j]);
		}
	}
	//print array a and b
	printf("Elements of array a is:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i\t", a[i][j]);
		}
		printf("\n");
	}
	printf("Elements of array b is:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i\t", b[i][j]);
		}
		printf("\n");
	}
	//sum array a and b and store it in array c
	printf("sum of first and second array is:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%i\t", c[i][j]);
		}
		printf("\n");
	}
}