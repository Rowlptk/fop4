/*
function ==>  is a block of code execeuted when called

3 parts
 ==>  function declaration
 ==>  function definition
 ==>  function call
*/

#include<stdio.h>

void add();      // function declaration
// parameterless function
int sum(int e, int f);
// parameterized function
void main()
{
    int a,b,x;
    printf("Enter two numbers a and b ");
    scanf("%d%d",&a,&b);
    x = sum(a,b);
    printf(" sum = %d ",x);
    printf("sum = %d ",sum(a,b));
    add();
}

int sum(int e, int f)
{
    return (e+f);
}



void add()
{
    int x, y;
    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);
    printf("%d + %d = %d",x,y,(x+y));
}

login:

cash transaction
1. Balance check
2. Deposit    ==> 25000
3. Withdraw   ==> 20000    multiple of 500
4. Exit









