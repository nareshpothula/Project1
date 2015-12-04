#include<stdio.h>
main()
{
int num,pos,op;
printf("enter the num....\n");
scanf("%d",&num);
position:
printf("enter the pos....\n");
scanf("%d",&pos);
if(pos>=0&&pos<=31)
{
goto option;
}
else
goto position;

/*if(!(pos>=0&&pos<=31))
{
goto option;
}

*/
option:
printf("1) set\n 2)clear\n 3)compliment\n");
printf("enter the op....\n");
scanf("%d",&op);
if(op==1)
{
 num=num|(1<<pos);
 printf("new num=%d\n",num);
}
else if(op==2)
{
 num=num&~(1<<pos);
 printf("new num=%d\n",num);
}
else if(op==3)
{
 num=num^(1<<pos);
 printf("new num=%d\n",num);
}
else 
{
printf("invalide option\n");
goto option;
}
}
