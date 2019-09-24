#include<stdio.h>
#include<string.h>

void main()
{
    char usr[10],pwd[10];
    printf("Enter Username : ");
    gets(usr);
    printf("Enter Password : ");
    gets(pwd);
    if((strcmp(usr,"admin") == 0)&&(strcmp(pwd,"12345") == 0))
    {
        system("cls");
        printf("\nyou are logged in!\n");
    }
    else
    {
        system("cls");
        printf("\nUsername or password is incorrect\n");
    }
    //puts(usr);
    //puts(pwd);
}
