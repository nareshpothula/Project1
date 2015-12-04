#include<stdio.h>
main()
{
//int a=2,b=4;
int k;
k=f1(10,20);
printf("%d",k);
}
f1(int a,int b)
{
return(f2(20));
}
f2(int a)
{
return(a*a);
}
