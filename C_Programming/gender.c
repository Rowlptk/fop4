#include<stdio.h>
void main()
{
    char ch;
    int age;
    printf("Enter f for female: ");
    scanf(" %c",&ch);
    printf("Enter your age : ");
    scanf("%d",&age);
    if(ch=='f')
    {
        if(age>=18 && age<=24)
        {
            printf("You are eligible to apply : ");
        }
        else
        {
            printf("Age from 18-24 only can apply: ");
        }
    }
    else
    {
        printf("No vacancy for male..\nKindly stay updated for upcoming vacancy ");
    }
}
