#include <stdio.h>
int mystrlen(char *str);

int main(void)
{
	char* str1 = "Emmanuel";
	char* str2 = "David";
	char* str3 = "precious";
	printf("The length of %s is %i\n", str1, mystrlen(str1));
	printf("The length of %s is %i\n", str2, mystrlen(str2));
	printf("The length of %s is %i\n", str3, mystrlen(str3));
	return(0);
}

/*A function that calculates and returns the length of a string*/
int mystrlen(char *str)
{
	int len = 0;
	for (; *str != '\0'; str++ )
	{
		len++;
	}
	return(len);
}