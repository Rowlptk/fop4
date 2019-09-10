/*
generate multiple of 3 from 1 to 100
but multiple of 9 is not allowed.

generate prime numbers from 0 to 100.

reverse a number.

check palindrome  121

check armstrong number 153 ==> 1^3 + 5^3 + 3^3
                                3 + 125 + 27 ==> 153


100


generate odd numbers from 40 to 70;
*/
#include<stdio.h>
void main()
{
    int i;
    for(i=40;i<=70;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
