#include<stdio.h>

void login();
int menu();
void option(int opt);

int T = 1000;


void main()
{
    login();
}

void option(int opt)
{
    switch(opt)
    {
    case 1:
        printf("Check Balance");
        break;
    case 2:
        printf("Deposit");
        break;
    case 3:
        printf("Withdraw");
        break;
    case 4:
        printf("Exit");
        break;
    default:
        printf("Invalid Option!");
    }
}

int menu()
{
    int n;
    printf("Welcome to Avengers Bank:\n\n");
    printf("Enter:\n1. Check Balance\n2. Deposit\n3. Withdrawal\n4. Exit\nOption: ");
    scanf("%d",&n);
    return n;
}






void login()
{
    char usr[10], pwd[10];
    int count = 1,opt;
    do{
        system("cls");
        printf("Attempt Remaining : %d\n",(4-count));
        printf("Enter your Username: ");
        gets(usr);
        printf("Enter your Password: ");
        gets(pwd);
        count++;
    }while(((strcmp(usr,"admin")!=0) || (strcmp(pwd,"admin")!=0))&& count<=3);
    if( (strcmp(usr,"admin")==0) && (strcmp(pwd,"admin")==0))
    {
        system("cls");
        opt = menu();
        option(opt);
    }
    else
    {
        system("cls");
        printf("Attempt Remaining : %d\n",(4-count));
        printf("\nYour Account is Locked!\n");
    }

}

//char[5][10] = {"ram","shyam","hari","sita","git"}




