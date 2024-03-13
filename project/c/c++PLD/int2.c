#include <stdio.h>
void printnum(void);

int main(void)
{
    printnum();
    return(0);
}
void printnum(void)
/*A function that prints numbers 0 to 9; but skips 2 and 4*/
{
    int num = 0;
    while (num <= 9)
    {
        if (num == 2 || num == 4)
        {
            ++num;
            continue;
        }
        printf("%i\n", num);
        num++;
    }
}