#include <stdio.h>
void reset_to_98(int *n);

int main(void)
{
	int n =30;
	printf("value before reset is %i\n", n);
	reset_to_98(&n);
	return(0);
}
/*A function that resets the value of an integar pointer to 98*/
void reset_to_98(int *n)
{
	*n = 98;
	printf("value after reset is %i\n", *n); 
}