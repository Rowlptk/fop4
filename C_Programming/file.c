#include<stdio.h>
void main()
{
    FILE *fp;
    char ch,t;
    fp = fopen("example.txt","a");
    printf("Enter terminating character: ");
    scanf(" %c",&t);
    while(ch != t)
    {
        ch = getchar();
        fputc(ch,fp);
    }
    fclose(fp);

    system("cls");
    printf("The File Contents are : \n\n");
    fp = fopen("example.txt","r");
    if(fp==NULL)
    {
        printf("file not found!");
    }
    else
    {
        while(!feof(fp))
        {
            ch = fgetc(fp);
            putchar(ch);
        }
    }
    fclose(fp);
}
