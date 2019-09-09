#include<stdio.h>

void main()
{
    int x,y;
    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);
    if(x==y)
    {
        printf("x is equal to y");
    }
    else if(x>y)
    {
        printf("x is greater than y");
    }
    else
    {
        printf("y is greater than x");
    }
}
