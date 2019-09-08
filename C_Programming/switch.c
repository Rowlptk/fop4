/*
switch.. case

similar to if... else if... else ladder
conditions ==> case ==> constant values
*/
#include<stdio.h>
#define pi 3.1415


void main()
{
    char num;
    printf("Enter a day number: ");
    scanf(" %c",&num);
    switch(num)
    {
    case 'S':
    case '1':
        printf("Sunday");
        break;

    case '2':
        printf("Monday");
        break;

    default:
        printf("Invalid day");
    }


}




Q.

Properties of circle:
press to calculate:
A for Area
C for Circumference
R for Radius

Select: A

Enter a diameter: 5

Area of circle is

 Hint:
     float
     #define pi 3.1415
     A = pi*r*r
     C = 2*pi*r
     R = d/2
















