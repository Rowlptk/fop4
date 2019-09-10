#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    while(a<0)
    {
        printf("Enter a Positive Number Only: ");
        scanf("%d",&a);
    }
    printf("Enter Second Number: ");
    scanf("%d",&b);
    while(b<0)
    {
        printf("Enter a Positive Number Only: ");
        scanf("%d",&b);
    }
    printf("%d + %d = %d",a,b,(a+b));
}
