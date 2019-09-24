#include<stdio.h>

void main()
{
    char str[500],ch,t;
    int i = 0;
    printf("Enter a terminating Character: ");
    scanf(" %c",&t);
    printf("Enter a paragraph: \n");

    /*
    for(i=0;ch!=t;i++)
    {

    }
    */


    while(ch!=t)
    {
        ch = getchar();
        str[i] = ch;
        i++;
       // putchar(ch);
    }

    printf("\nParagraph is: \n");
    //puts(str);
    i = 0;
    while(str[i]!=t)
    {
        putchar(str[i]);
        i++;
    }
}






