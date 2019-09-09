#include<stdio.h>
void main()
{
    int x,y,dif;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    dif = x - y;
    printf("The difference is %d\n",dif);
    printf("%d - %d = %d",x,y,dif);
}
