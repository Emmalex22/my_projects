#include <stdio.h>

/*A funtion that prints all members of an array inputed at runtime in forward and reverse position*/
int main(void)
{
	int i;
	int nums[5] = {2, 4, 6, 8, 7};
	//printf("Enter numbers:\n");
	//for(i = 0; i < 5; i++)
		//scanf("%i", &nums[i]);
	//for(i = 0; i < 5; i++)
		//printf("%i\n", nums[i]);
	//printf("\n");
	/*print array in reverse order*/
	for(i = 4; i >= 0; i--)
		printf("%i\n", nums[i]);
	return(0);
}