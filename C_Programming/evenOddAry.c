#include<stdio.h>
void main()
{
    int list[10],i;
    printf("Enter 10 Numbers: \n");
    for(i=0;i<=9;i++)
    {
        printf("list[%d] = ",i);
        scanf("%d",&list[i]);
    }
    printf("Even Odd List: \n");
    for(i=0;i<=9;i++)
    {
        if(list[i]%2==0)
        {
            printf("%d is an even Number\n",list[i]);
        }
        else
        {
            printf("%d is an Odd Number\n",list[i]);
        }
    }

    printf("\n Even Numbers are: \n");
    for(i=0;i<=9;i++)
    {
        if(list[i]%2==0)
        {
            printf("%d\n",list[i]);
        }
    }

    printf("\n Odd Numbers are: \n");
    for(i=0;i<=9;i++)
    {
        if(list[i]%2!=0)
        {
            printf("%d\n",list[i]);
        }
    }












}
