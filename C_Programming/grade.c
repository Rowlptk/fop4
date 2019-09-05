/*A ==> 80-100
B ==> 60-79
C ==> 40-59
Fail ==> 0-39
Invalid ==> <0 and >100
*/

#include<stdio.h>
void main()
{
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("Congratulation! You got Grade A ");
    }
    else if(marks>=60 && marks<80)
    {
        printf("You got Grade B ");
    }
    else if(marks>=40 && marks<60)
    {
        printf("You got Grade C");
    }
    else if(marks>=0 && marks<40)
    {
        printf("Sorry! You Failed. Better Luck Next Time. ");
    }
    else
    {
        printf("This Mark Does not exist in real Life. ");
    }
}


euta input check even or odd
year check garne leap year ho ki haina.

2019-12-3






