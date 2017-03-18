#include<stdio.h>
void main()
{
 int a[15],n,m,c=0,i;
 clrscr();
 printf("enter the sizeof the elements");
 scanf("%d",&n);
 printf("enter elements to display");
 for(i=0;i<=n-1;i++)
 scanf("%d",&a[i]);
 printf("enter no to be searched");
 scanf("%d",&m);
 for(i=0;i<=n-1;i++)
 if(a[i]==m)
 { c=1;
   break;
   }
   if(c==0)
   printf("no is nt found");
   else
   printf("no is found");
   getch();
   }
