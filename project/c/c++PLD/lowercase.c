#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//A programme that cnverts uppercase letters to lowercase in string
int main(void)
{
	char buffer[300];
	int i;
	printf("Enter String\n");
	fgets(buffer, sizeof(buffer), stdin);
	if(buffer[strlen(buffer) - 1] == '\n')
		buffer[strlen(buffer) - 1] = '\0';
	for(i = 0; buffer[i] != '\0'; i++)
	{
		if(buffer[i] >= 'A' && buffer[i] <= 'Z')
		{
			buffer[i] = buffer[i] + 32;
		}
	}
	printf("%s\n", buffer);
}