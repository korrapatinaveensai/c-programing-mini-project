// Program for Billing System of Product
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Product
{
    int pid; 
    char pname[50];
    int rate;
    int qty;
}; struct Product p[10];
void main()
{
    int i,total=0;
    for(i=0;i<5;i++)
   { 
      fflush(0);
      printf("\nEnter Product Id: ");
      scanf("%d",&p[i].pid);
      fflush(0);
      printf("\nEnter Product Name: ");
      scanf("%s",p[i].pname);
      fflush(0);
      printf("\nEnter Product Rate: ");
        scanf("%d",&p[i].rate);
        fflush(0);
        printf("\nEnter Product Qty: ");
        scanf("%d",&p[i].qty);
   }
 printf("\n------------------Product Details----------------------\n");
 printf("\n Id\tName\tPrice\tQuantity\tAmount\n");
 for(i=0;i<5;i++)
 {
    printf("%d\t  %s\t   %d\t   %d\t    %d",p[i].pid,p[i].pname,p[i].rate,p[i].qty,(p[i].qty*p[i].rate));
    total=total+p[i].qty*p[i].rate;    
    printf("\n");
 }
  printf("\n----------------------------------------------------------");
  printf("\n\t\t\t Total Amount : %d",total);
}