#include<stdio.h>
main()
{
double f=7.7;
int *ip,i,j;
ip=&f;
ip=ip+1;
for(j=0;j<=1;j++)
{
 for(i=31;i>=0;i--)
  {
      if(*ip&1<<i)
       printf("1");
      else
      printf("0");

if((i+32)%32==0)
printf(" ");
  }
ip=ip-1;
}
printf("\n");
}
