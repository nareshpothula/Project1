#include<stdio.h>
main()
{
int num,i;
printf("enter the num.....\n");
scanf("%d",&num);
{
for(i=31;i>=0;i--)
if(num&1<<i)
printf("1");
else
printf("0");
}

printf("\n");
{

for(i=31;i>=0;i--)
if(num&1<<i)
printf("0");
else
printf("1");
}
}
