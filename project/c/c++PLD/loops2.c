#include <stdio.h>

// A function that prints a fibonacci series

int main(void)
{
    int count = 3;
    long int first = 1, second = 2;
    long int next = first + second;
    printf("%lu, ", first);
    printf("%lu, ", second);

    while (count <= 50)
    {
        printf("%lu, ", next);

        first = second;
        second = next;
        next = first + second;
        count++;
    }
    return(0);
}