#include<stdio.h>
void swap(int *x,int *y);
main()
{
int a=10,b=20;
swap(&a,&b);
printf("a=%d   b=%d\n",a,b);
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
printf("x=%d   y=%d\n",*x,*y);
}
