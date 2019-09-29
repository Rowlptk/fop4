#include<stdio.h>

void login();
int menu();
void option(int opt);
void checkBalance();
void deposit();
void withdraw();
void proceed();

float totalAmount = 0;


void main()
{
    login();
}

void proceed()
{
    char ch;
    int opt;
    printf("\nPress Y to continue... ");
    scanf(" %c",&ch);
    system("cls");
    if(ch == 'Y' || ch == 'y')
    {
       opt = menu();
       option(opt);
    }
    else
    {
        printf("\nSee you Soon...\n");
    }
}

void withdraw()
{
    float withdrawAmount;
    system("cls");
    printf("\nEnter Withdrawal Amount: ");
    scanf("%f",&withdrawAmount);
    system("cls");
    if(withdrawAmount <= totalAmount)
    {
        if(withdrawAmount <= 10000)
        {
            if((int)withdrawAmount % 500 == 0)
            {
                totalAmount -= withdrawAmount;
                printf("\nAmount Withdrawn is %.2f\n",withdrawAmount);
                printf("\nYour New Balance is %.2f\n",totalAmount);
            }
            else
            {
                printf("\nAmount must be a multiple of 500\n");
            }
        }
        else
        {
            printf("\nAmount Exceeds per transaction limit (10000)\n");
        }

    }
    else{
        printf("\nYou do not have sufficient balance\n");
    }
}

void deposit()
{
    float depositAmount;
    system("cls");
    printf("\nEnter Deposit Amount : ");
    scanf("%f",&depositAmount);
    system("cls");
    if(depositAmount <= 25000)
    {
        totalAmount += depositAmount;
        printf("\nDeposited Amount is %.2f\n",depositAmount);
        printf("\nYour New Balance is %.2f\n",totalAmount);
    }
    else
    {
        printf("\nYour Deposit Amount exceeds 25000\n");
    }

}


void checkBalance(){
    system("cls");
    printf("\nYour Current Balance is %.2f\n",totalAmount);
}

void option(int opt)
{
    switch(opt)
    {
    case 1:
        checkBalance();
        proceed();
        break;
    case 2:
        deposit();
        proceed();
        break;
    case 3:
        withdraw();
        proceed();
        break;
    case 4:
        exit(0);
    default:
        system("cls");
        printf("\nInvalid Option!\n");
        proceed();
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




