#include <stdio.h>
#include <string.h>
// A function that prints all even numbers from 1 - 20
int main(void)
{
    int num;
    for (num = 1; num <= 20; num++)
    {
        if (num % 2 == 0)
            printf("%i\n", num);
    }
    return(0);
}