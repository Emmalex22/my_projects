#include <stdio.h>
/**
* print_alphabex10t - a function that prints the alphabets in lowercase
* Return: Always 0
*/

void print_alphabetx10(void);
int main(void)
{
	print_alphabetx10();
	return (0);
}

/**
* print_alphebetx10 - a function that prints 10 times the alphabets in lowercase
* Return: Always 0
*/
void print_alphabetx10(void)
{
	char ch;
	int i;
	int count = 10;
	for (i = 1; i <= count; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}