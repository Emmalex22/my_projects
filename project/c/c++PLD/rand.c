#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*function that generates a random number and checks if it is a positive or negative*/

int main(void)
{
    srand((int)time(NULL));
    int randno = rand() %200  - 100;

    printf("%i\n", randno);
    if(randno < 0)
       printf("This is a negative number\n");

    else if(randno >= 0)
        printf("Tihis is a positive number\n");
    else
        printf("This is an invalid numbe\n");
    return(randno);
}