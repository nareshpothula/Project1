#include<stdio.h>
main()
{
int i,j,num,x,y;
printf("enter the num.....\n");
scanf("%d",&num);
printf("before %d\n",num);
for(i=31;i>=0;i--)
if(num&1<<i)
printf("1");
else
printf("0");
printf("\n");
for(i=0,j=31;i<j;i++,j--)
{
x=num<<1&i;
y=num<<1&j;
if(x!=y)
{
num=num^1<<i;
num=num^1<<j;
}
}
printf("after %d\n",num);
for(i=31;i>=0;i--)
if(num&1<<i)
printf("1");
else
printf("0");
printf("\n");
}



