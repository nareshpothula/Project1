#include<stdio.h>
main()
{
int num,a;
printf("enter the num.....\n");
scanf("%d",&num);
//num>=0?printf("+ve\n"):printf("-ve\n");

/*
if(num>=0)
printf("+ve\n");
else
printf("-ve\n");
*/

num&1<<31?printf("-ve"):printf("+ve");
//if(a==0)
//printf("+ve\n");
//else
//printf("-ve\n");


}
