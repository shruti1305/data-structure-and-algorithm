#include<stdio.h>
#include<conio.h>
int main()
{ int a[10],frst,mid,last,n,search,c;
clrscr();
  printf("size");
  scanf("%d",&n);
  printf("elemenst");
  for(c=0;c<n;c++)
  scanf("%d",&a[c]);
  printf("search");
  scanf("%d",&search);
  frst=0
  last=n-1
  mid=(frst+last)/2;
  while(frst<=last)
  {
  if(a[mid]<search)
   frst=mid+1;
   else if(a[mid]==search)
   {
   printf("no is found");
   break;
   else
   last=mid-1;
   mid=(frst+last)/2;
   }
   if(frst>last)
   printf("no is nt found");
   return 0;
   }