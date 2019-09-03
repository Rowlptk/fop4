/*Q.

Enter a diameter;
2
The Area of Circle is 3.14 sq. cm

Hints:

int ==> float
%d ==> %f
pi = 3.14
r = d/2;
A = Pi*r*r
*/

#include<stdio.h>
#define PI 3.1415

void main()
{
    float dia, rad, Area;
    printf("Enter diameter of a Circle in cm: ");
    scanf("%f",&dia);
    rad = dia/2;
    Area = PI*rad*rad;
    printf("The Area of a Circle is %.2f sq.cm ",Area);
}













