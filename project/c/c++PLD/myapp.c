#include <stdio.h>
#include <string.h>

/*A program that accepts two cmd line arguements*/
int main(int argc, char *argv[])
{
	/*check if number of arguements is 3*/
	if(argc == 3)
	{
		/*compare the 2nd and 3rd argument to be sure its the username and password*/
		if(strcmp(argv[1], "Emmalex22") == 0 && strcmp(argv[2], "pteridophyta") == 0)
		{
			printf("Welcome to myapp\n");
		}
		else if(strcmp(argv[1], "Emmalex22") != 0)
			printf("incorrect username\n");
		else if(strcmp(argv[2], "pteridophyta") != 0)
			printf("incorrect password\n");
		else
			printf("incorrect username and password\n");
	}
	else
		printf("sorry, invalid input\n");

	return(0);
}