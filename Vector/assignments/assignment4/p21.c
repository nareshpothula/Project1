#include<stdio.h>
main()
{
int num,pos,op;

printf("enter the num......\n");
scanf("%d",&num);

printf("enter the pos.....\n");
scanf("%d",&pos);

option:
printf("1) set\n 2)clear\n");

printf("enter the options.....\n");
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
else 
{
printf("unknown option\n");
goto option;
}
printf("thanks......\n");



}
