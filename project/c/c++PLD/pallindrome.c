#include <stdio.h>
#include <stdbool.h>
//A function that checks if an integer is a pallindrome
int rev_num(int num);
int main(void)
{
	int num, reverse;
	printf("please enter number\n");
	scanf("%i", &num);
	reverse = rev_num(num);
	if(num == reverse)
	{
		printf("The number is a pallindrome\n");
		return true;
	}
	else
	{
		printf("The number is not a pallindrome\n");
		return false;
	}
	return(0);
}

int rev_num(int num)
{
	int reverse = 0, remainder = 0;
	while(num != 0)
	{
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num = num / 10;
	}
	return(reverse);
}