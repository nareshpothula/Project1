#include<stdio.h>
main()
{
int num,c=0,i;
printf("enter the num.....\n");
scanf("%d",&num);
for(i=31;i>=0;i--)
if(num&1<<i)
c++;
if(c==1)
printf("power of 2\n");
else
printf("not power of 2\n");

//num&(num-1)?printf("not power of 2\n"):printf("power of 2\n");






}
