#include<stdio.h>
void main()
{
    int m1[2][2], m2[2][2], sum[2][2],i,j;
    printf("Enter Matrix m1:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("m1[%d][%d] = ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    printf("\nEnter Matrix m2:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("m2[%d][%d] = ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    printf("\nResult Matrix is:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            printf("%d\t");
        }
        printf("\n");
    }


}
