#include <stdio.h>
void swap(int *a, int *b);

int main(void)
{
	int a = 5;
	int b = 2;
	printf("Before swapping, a = %i and b = %i\n", a, b);
	swap(&a, &b);
	return(0);
}

/*A function that swaps the value of two integars*/
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("After swapping, a = %i and b = %i\n", *a, *b);
}