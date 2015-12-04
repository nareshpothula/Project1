#include<stdio.h>
#include<stdarg.h>
int sum(char *,...);
main()
{
int i=10,j=20,k=30,l=40,m;
m=sum("na" ,i,j,k,0);
printf("%d\n",m);

m=sum("hai",i,k,0);
printf("%d\n",m);
}
int sum(char*n,...)
{
int sum=0,i,m;
va_list p;
	va_start(p,n);

 for( ; ; )
 {
  m=va_arg(p,int);

  if(m==0)
  break;

  sum=sum+m;

 }
 return sum;
}
