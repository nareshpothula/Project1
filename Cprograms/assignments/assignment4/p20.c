#include<stdio.h>
main()
{
int num,pos,r;
printf("enter the num.......\n");
scanf("%d",&num);
printf("enter the pos......\n");
scanf("%d",&pos);
(num&1<<pos)?printf("set\n"):printf("clear\n");






}
