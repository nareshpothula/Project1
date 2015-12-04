#include<stdio.h>
main()
{
int i=100,n,c,c1=0;
for(n=100;;n++)
{
c=0;
  for(i=1;i<=n;i++)
   {
    if(n%i==0)
    c++;
   }

if(c==2)
{
  c1++;
  printf("%d count->%d\n",n,c1);
}
 if(c1>99)
 break;


}
puts("done");
}

