#include <stdio.h>
/*A function that prints the sum of scores of 10 pupils gotten at runtime*/
int main(void)
{
	int i, scores[10];
	int sum = 0;
	printf("Enter scores:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &scores[i]);
	for (i=0; i<10; i++)
		sum = sum + scores[i];
	printf("The sum of the scores is %i\n", sum);

	return(0);
}