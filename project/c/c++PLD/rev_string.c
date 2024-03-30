#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rev_string(char* str);

int main(void)
{
	char* rev_str;
	char buffer[150];
	printf("Enter string: \n");
	fgets(buffer, sizeof(buffer), stdin);
	if(buffer[strlen(buffer) - 1] == '\n')
		buffer[strlen(buffer) - 1] = '\0';
	rev_string(buffer);
	printf("Reversed string is %s\n", buffer);
}
void rev_string(char* str)
{
	int i, len;
	char temp;
	len = strlen(str);
	for(i=0; i<len/2; i++)
	{
		temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;
	}
}