#include<stdio.h>
void main()
{
    //int ary[5] = {1,2,5,7,8};
    int ary[5],i;
    printf("Enter 5 values:\n");
    for(i=0;i<=4;i++)
    {
        printf("ary[%d] = ",i);
        scanf("%d",&ary[i]);
    }
    printf("\nValues in array are as follows: \n");

    for(i=0;i<=4;i++)
    {
        printf("%d  ",ary[i]);
    }
    /*
    a[0] = 1;
    a[1] = 4;
    a[2] = 10;
    a[3] = 45;
    a[4] = 60;
    printf("Before ==> %d ",ary[3]);
    ary[3] = 10;
    printf("\nAfter ==> %d ",ary[3]);
    */
}
