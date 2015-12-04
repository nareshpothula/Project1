#include<stdio.h>
#include<stdarg.h>

int sum(int,...);
main()
{
int i=10,j=20,k=30,l=40,m;
m=sum(2,i,j);
printf("%d\n",m);

m=sum(3,i,j,l);
printf("%d\n",m);

m=sum(4,i,j,l,k);
printf("%d\n",m);
}
 int sum(int n,...)
 {
 int i,sum=0,m;
  va_list p;
	va_start(p,n);
 for(i=0;i<n;i++)
 {
  m=va_arg(p,int);
  sum=sum+m;
 }


return sum;
}





