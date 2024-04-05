#include <stdio.h>
#include <string.h>

void rom_to_int(char* str);
void main(void)
{
	char* str1 = "III";
	char* str2 = "CM";
	char* str3 = "XL";

	rom_to_int(str1);
	rom_to_int(str2);
	rom_to_int(str3);
}
/*A function that converts roman figure into integar values*/
void rom_to_int(char* str)
{
	int i, integar = 0;
	for (i=0; str[i] != '\0'; i++)
	{
		if(str[i] == 'I')
		{
			if(str[i+1] == 'V' || str[i+1] == 'X')
			{
				integar -= 1;
			}
			else
			{
				integar += 1;
			}
		}
		if(str[i] == 'V')
			integar += 5;
		if(str[i] == 'X')
		{
			if(str[i+1] == 'L' || str[i+1] == 'C')
			{
				integar -= 10;
			}
			else
			{
				str[i] += 10;
			}
		}
		if(str[i] == 'L')
			integar += 50;
		if(str[i] == 'C')
		{
			if(str[i+1] == 'D' || str[i+1] == 'M')
			{
				integar -= 100;
			}
			else
				integar += 100;
		}
		if(str[i] == 'D')
			integar += 500;
		if(str[i] == 'M')
			integar += 1000;

	}
	printf("integar value is %i\n", integar);
}