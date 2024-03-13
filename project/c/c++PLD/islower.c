#include <stdio.h>

int _islower(int c);

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		printf("This is an upercase character\n");
		return(1);
	}
	else
	{
		printf("This is a lowercase character\n");
		return(0);
	}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}