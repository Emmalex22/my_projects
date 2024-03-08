#include <stdio.h>
#include <stdlib.h>
/*This is a program that calculates the  grading system in UNIZIK*/

int main(void)
{
    double score;
    
    scanf("%lf", &score);
    if (score >= 70.0)
        printf("A\n");
    else if (score > 59.9 && score <= 69.9)
        printf("B\n");
    else if (score > 49.9 && score <= 59.9)
        printf("C\n");
    else if (score >= 45.0 && score <= 49.9)
        printf("D\n");
    else if (score >= 40.0 && score <= 44.9)
        printf("E\n");
    else if (score <= 39.9)
        printf("F\n");
    else
        printf("invalid grade");
    
    return(0);
}