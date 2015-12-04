#include<stdio.h>
void fibo(int );
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
fibo(n);
printf("\n");
}
void fibo(int x)
{
static int a=-1,b=1,c;
if(x)
{
c=a+b;
a=b;
b=c;
//if(c>=10&&c<=100)
//{
printf("%d ",c);
//}
fibo(x-1);
}
}
