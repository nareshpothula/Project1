#include<stdio.h>

int fun1(int *p,int *q)
{
int r;
r=p;
p=q;
q=r;
//printf("in fun1=%d  %d\n",*p,*q);
}

int fun2(int *p,int *q)
{
int r;
r=*p;
*p=*q;
*q=r;
//printf("in fun2=%d  %d\n",*p,*q);
}

main()
{
int i=10,j=20;
fun1(&i,&j);
printf("fun1=%d  %d\n",i,j);
fun2(&i,&j);
printf("fun2=%d  %d\n",i,j);
}
