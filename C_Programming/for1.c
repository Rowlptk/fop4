/*
syntax:
        1 i=0;          2 i<10
                        5
                        8
    for(initilization;condition;update)
    {                           4 7==> i++ ,i--
        3 6 ==> T
        //statements
    }

    ==> F
*/

/*ASCII ==>  American Standard Code for Information Interchange

A ==> 65
Z ==> 90

a - z ==> 97-122
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("%d ==> %c\t",i,i);
    }
return 8;

    /*char j;
    j = 'a';
    i = 65;
    printf("%c ==> %d\n",j,j);
    printf("%d ==> %c",i,i);
    */
}















