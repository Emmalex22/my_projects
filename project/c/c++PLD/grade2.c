#include <stdio.h>
/*A function that calculates the grade of UNIZIK using switch-case*/
int main(void)
{
    int score;
    scanf("%i", &score);
    switch(score)
    {
        case 70 ... 100:
        {
            printf("A\n");
            break;
        }
        case 60 ... 69:
        {
            printf("B\n");
            break;
        }
        case 50 ... 59:
        {
            printf("C\n");
            break;
        }
        case 45 ... 49:
        {
            printf("D\n");
            break;
        }
        case 40 ... 44:
        {
            printf("E\n");
            break;
        }
        case 0 ... 39:
        {
            printf("F\n");
            break;
        }
        default:
        {
            printf("invalid grade\n");
            break;
        }
    }

    return(0);
}