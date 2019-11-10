#include<stdio.h>
struct book
{
   int sn;
   char name[20];
   float price;
   char rack;
}b[3];

void main()
{
  //struct book b1;
  int i,n,flag = 0;
  for(i=0;i<=2;i++)
  {
        printf("Enter book %d Serial number : ",(i+1));
        scanf("%d",&b[i].sn);
        getchar();
        printf("Enter book %d name : ",(i+1));
        gets(b[i].name);
        printf("Enter book %d price : ",(i+1));
        scanf("%f",&b[i].price);
        printf("Enter book %d rack assigned : ",(i+1));
        scanf(" %c",&b[i].rack);
        printf("\n");
  }

  //system("cls");
  printf("Enter Book Serial Number to view : ");
  scanf("%d",&n);

  for(i=0;i<=2;i++)
  {
      if(b[i].sn == n)
      {
          //s = i;
          flag = 1;
          break;
      }
  }

    if(flag == 1){
        printf("\n************ Book vault **************\n");
        printf("SN : %d\n",b[i].sn);
        printf("Name : %s\n",b[i].name);
        printf("Price : %.2f\n",b[i].price);
        printf("Rack : %c\n",b[i].rack);
        printf("**************************************\n\n");
    }
    else{
        printf("\nBook Not Found! ");
    }
}
