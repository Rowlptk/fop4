#include<stdio.h>
void main()
{
    int i,n,m;
    printf("Kun Wanza? ");
    scanf("%d",&n);
    printf("Kati samma grane? ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
}
