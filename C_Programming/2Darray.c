#include<stdio.h>

void main()
{
    //int m[2][3][2] =
    //{{1,2},{3,4},{5,6}},{{4,4},{6,6},{9,9}}

    int m[3][3],i,j;
    printf("Fill 3 x 3 matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\n3 x 3 matrix: \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

m1 ==> 2 by 2
m2 ==> 2 by 2
res ==> 2 by 2


}
