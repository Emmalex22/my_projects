#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, k, sum, r1, c1, r2, c2, arr1[3][3], arr2[3][3], arr3[3][3];
    printf("enter number of rows and colums of first array: \n");
    scanf("%i%i", &r1, &c1);
    printf("enter elements of first array\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%i", &arr1[i][j]);
        }
    }
    printf("Enter number of rows and columns of second array: \n");
    scanf("%i%i", &r2, &c2);
    printf("enter elements of second array\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%i", &arr2[i][j]);
        }
    }
    printf("first matrix is:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%i\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix is:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%i\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(c1 != r2)
    {
        printf("matrix cannot be multiplied\n");
    }
    else
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                sum=0;
                for(k=0; k<r2; k++)
                {
                    sum = sum + arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }
        printf("multiplied matrix is:\n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%i\t", arr3[i][j]);
            }
            printf("\n");
        }
    }
}