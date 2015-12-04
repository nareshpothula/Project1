#include<stdio.h>
main()
{
int a[5],i,ele,c=0,j;
printf("enter the value.....\n");
ele=sizeof (a)/sizeof a[i];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
for(i=0;i<ele;i++)
{
c=0;
 for(j=0;j<=a[i];j++)
  {
   if(a[i]%j==0)
   c++;
  }

 if(c==1)
 printf("enter num is prime %d\n",a[i]);
}
}
