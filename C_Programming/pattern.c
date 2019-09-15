/*
*****
*****
*****
*****
*****
*/
#include<stdio.h>

void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}







