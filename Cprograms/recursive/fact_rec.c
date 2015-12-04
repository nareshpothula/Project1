#include<stdio.h>
int fact_rec(int);
main()
{
int n,fact;
printf("enter the num.....");
scanf("%d",&n);
fact=fact_rec(n);
printf("%d\n",fact);
}
int fact_rec(int n)
{
int f=1;
if(n>1)
return(n*fact_rec(n-1));
return 1;
}
