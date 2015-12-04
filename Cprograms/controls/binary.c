#include<stdio.h>
main()
{
int num,i=31;
printf("enter the num.....\n");
scanf("%d",&num);

a:
if(num&(1<<i))
printf("1");
else
printf("0");

if(i%8==0)
printf(" ");
i--;

if(i>=0) //if(i>=24, i>=16, i>= 8, i>=0)
goto a;

printf(" \n");





}
