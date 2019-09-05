#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter a date [yyyy-mm-dd]: ");
    scanf("%d-%d-%d",&y,&m,&d);
    if(y>=1000 && y<=9999)
    {
       if(m>=1 && m<=12)
       {
          if(d>=1 && d<=30)
          {
              printf("Date is valid");
          }
          else
          {
              printf("Day is invalid");
          }
       }
       else
       {
           printf("month is invalid")
       }
    }
    else
    {
        printf("Year is Invalid");
    }
}
