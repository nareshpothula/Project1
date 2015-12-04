#include<stdio.h>
main()
{
int b;
b=f(20);
printf("%d\n",b);
}
int f(int a)
{
a>20?return10:return20;
//return(a>20?10:20);
}
