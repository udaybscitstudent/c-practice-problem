// >write a program in c to input two matrix after that find addition.
#include<stdio.h>
void main()
{   
    int arr[3][3],arr1[3][3],i,j , sum[3][3];
    printf("\nenter 3x3 elements of first matrix\n:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    printf("\nenter element of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&arr1[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j] = arr[i][j]+arr1[i][j];
        }
    }
printf("sum of both matrix:\n");
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }




}