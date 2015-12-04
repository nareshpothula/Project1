#include<stdio.h>
main()
{
int a[10],i,j,k,c;
printf("enter the value\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
{
c=0;
  for(j=1;j<=a[i];j++)
//  {
  if(a[i]%j==0)
  c++;
//  }
  if(c==2)
  printf("prime num is%d\n",a[i]);
}
}
