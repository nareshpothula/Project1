#include<stdio.h>
main()
{
int num,pos,op,c=0;
printf("enter the num....\n");
scanf("%d",&num);
position:
	if(c>2)
	{
	printf("no more chances\n");
	return;
	}

printf("enter the pos....\n");
scanf("%d",&pos);
	if(!(pos>=0&&pos<=31))
	{

	c++;	

	goto position;
	}

/*if(!(pos>=0&&pos<=31))
{
goto option;
}

*/
option:
printf("1) set\n 2)clear\n 3)compliment\n");
printf("enter the op....\n");
scanf("%d",&op);
if(!(op>1&&op<=2))
{
c++;
goto position;
}

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
