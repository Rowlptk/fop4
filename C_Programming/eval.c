//X = A*B+ A*B*C (A=1,B=2,C=3, X=8)

#include<stdio.h>
 void main()
 {
    int X,A,B,C;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&A,&B,&C);
    X = A*B+A*B*C;
    printf("The Value of X is %d",X);
    printf("\n%d x %d + %d x %d x %d = %d",A,B,A,B,C,X);
 }
/*
 %d x %d + %d x %d x %d = %d
 A x B + A x B x C = X
 1 x 2 + 1 x 2 x 3 = 8
 */













