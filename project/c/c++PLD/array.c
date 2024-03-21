#include <stdio.h>
int sum(int n);
int main(void)
{
	int x, y, z;
	x = sum(6);
	y = sum(5);
	z = sum(10);
	//y = sum(10);
	//z = sum(2);
	printf("%i\n", x);
	printf("%i\n", y);
	printf("%i\n", z);
	return (0);
}
/*A function that sums all natural numbers up till n*/
//void sum(int n)
	//int add = 0;
	//int i;
	//for (i = 0; i <= n; i++)
	//{
	//	add += i;
	//}
	//printf("The sum of all natural numbers up to %i is %i\n", n, add)

/*using recurion*/
int sum(int n)
{
	if (n <= 0)
	{	
		return (0);
	}
	else
		return (n + sum(n - 1));
}