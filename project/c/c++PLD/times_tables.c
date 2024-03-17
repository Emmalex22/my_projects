#include <stdio.h>

// a function that prints the multiplications table of any given number
void mul_table(int num);

int main(void)
{
	mul_table(2);
	mul_table(7);
	return (0);
}

void mul_table(int num)
{
	int i;
	int mul;
	for (i = 1; i <= 12; i++)
	{
		mul = num * i;
		printf("%i x %i = %i\n", num, i, mul);
	}
}