#include<stdio.h>
//int check(int i,int j);
main()
{
int *c;
c=check(10,20);//10,20
printf("%d\n",c);//200
}
int* check(int i,int j)//100,200
{
int *p,*q;
p=&i;//100
q=&j;///200
printf("q=%d\n",q);//2000
if(i>=44)//false
return p;
else
return q;//200
}
