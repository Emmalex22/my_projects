#include <stdio.h>
void prime_checker(int x);
int main(void)
{
	prime_checker(3);
	prime_checker(1);
	prime_checker(17);
	prime_checker(19);
	prime_checker(0);
	return (0);
}
// A function that checks if a number x is a prime number or not.
void prime_checker(int x)
{
	int i;
	if (x <= 1)
	{
		printf("%i is not a prime number\n", x);
		return;
	}

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			printf("%i is not a prime number\n", x);
			break;
		}
		
	}
	if (i == x)
		printf("%i is a prime number\n", x);
}