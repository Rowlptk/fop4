#include<stdio.h>
#define pi 3.1415
void main()
{
    char ch;
    float d,r,A,C;
    printf("Properties of Circle:\n");
    printf("Press to Calculate:\n");
    printf("A for Area\nC for Circumference\nR for Radius\n\nSelect: ");
    scanf(" %c",&ch);
    printf("\nEnter a diameter: ");
    scanf("%f",&d);
    r = d/2;
    switch(ch)
    {
    case 'A':
    case 'a':
        A = pi*r*r;
        printf("Area of a circle is %.2f",A);
        break;

    case 'C':
    case 'c':
        C = 2*pi*r;
        printf("Circumference of a circle is %.2f",C);
        break;

    case 'R':
    case 'r':
        printf("The Radius of a circle is %.2f",r);
        break;

    default:
        printf("Invalid Option");
    }
}


/*
Calculator:
    press:
        + to add .
        - to subtract
        * multiply
        / to divide


select: +

enter two numbers : 4
5

4 + 5 = 9


Enter a character: a

vowel


exp ==> a,e,i,o,u ==> vowel
    ==> bahek ma ==> consonent
    ==>alphabet bahek ==> is not a alphabet



*/
























