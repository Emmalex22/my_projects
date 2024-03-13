#include <stdio.h>
/*A function that prints 10 times the numbers from 0 - 14*/
void int_mul(void);

int main(void)
{
	int_mul();
	return(0);
}

void int_mul(void)
{
	int numb, num;
	for (numb = 0; numb <= 14; ++numb)
	{
		num = 10 * numb;
		printf("%i\n", num);
	}
	putchar('\n');
}