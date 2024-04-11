#include <stdio.h>
void goodstring(char* str);

void main(void)
{
	char* str1 = "EMMAnuel";
	char* str2 = "EngLISh";
	char* str3 = "toMATOES";

	goodstring(str1);
	goodstring(str2);
	goodstring(str3);

}
/*A function makes a string great
* Example if it takes a string s1 = 'leeTCOde", it converts it tp "leetcode" 
* and vice versa.
*/
void goodstring(char* str)
{
	int i, neostring;
	for(i=0; str[i] != '\0'; i++)
	{
		if(65 <= str[i] >= 90)
		{
			neostring = str[i];
			for(i=1; 65 <= str[i+1] >= 90; i++)
			{
				neostring = str[i] + 32;
			}
		}
		else if(97 <= str[i] >= 122)
		{
			neostring = str[i];
			for(i=1; 97 <= str[i+1] >= 122; i++)
			{
				neostring = str[i] - 32;
			}
		}
		
	}
	printf("new string is: %i\n", neostring);
}